/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200280
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (short)-26080))) || (((/* implicit */_Bool) -1513793833))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [i_0] [6])) + (-2011114639)))))) / (((((9770255044023673443ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) - (((unsigned long long int) var_10)))))))));
                    var_19 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) ((var_4) <= (arr_6 [i_0] [i_0] [i_0] [4U])))) << (((((((/* implicit */unsigned long long int) var_3)) & (6194426052403238239ULL))) - (1351258109ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) (unsigned char)184))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24402))) / (var_16)))));
                    }
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)0))))) & (((((/* implicit */long long int) arr_3 [8ULL])) | (var_15))))) == (((/* implicit */long long int) ((((unsigned int) arr_5 [i_0] [i_0] [i_0])) << (((((/* implicit */int) ((unsigned char) var_2))) - (186))))))));
                    arr_14 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */long long int) ((int) ((288230376151711743LL) / (((/* implicit */long long int) -774970745)))))) & (((long long int) ((long long int) var_4)))));
                }
            } 
        } 
    } 
}
