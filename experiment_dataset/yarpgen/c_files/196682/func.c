/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196682
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
    var_10 = ((((/* implicit */_Bool) (~((-(var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_0), (((/* implicit */unsigned int) min((33554431), (((/* implicit */int) var_9))))))));
    var_11 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (unsigned short)57243)) ? (var_4) : (((/* implicit */long long int) -33554436))))))));
    var_12 &= var_2;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) || (((/* implicit */_Bool) ((unsigned short) 885627440U))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18408))) ^ (2341373706479980872ULL)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_7 [i_0]), (((/* implicit */unsigned long long int) 33554435))))))) ? ((~(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-7747)), ((unsigned short)18408)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)136)) ^ (255167170)))) : (min((2773584582109327889LL), (((/* implicit */long long int) 255167141)))))))));
                }
            } 
        } 
    }
}
