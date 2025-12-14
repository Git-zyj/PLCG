/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196769
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!((((_Bool)0) && ((!(((/* implicit */_Bool) 4066503510006168414ULL))))))));
                    arr_11 [11ULL] [11ULL] [(unsigned char)12] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) 823442375)))));
                    arr_12 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-7239806459402416557LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))))))) <= (((1596262586U) >> (((7239806459402416557LL) - (7239806459402416551LL))))))))));
                    var_20 = ((/* implicit */short) (((~((~(((/* implicit */int) (unsigned short)19439)))))) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) > (3803535121998781566LL)))) < (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)23)), ((unsigned short)54593)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((long long int) (unsigned char)227)))) << (((var_12) + (9186259243700605671LL)))));
}
