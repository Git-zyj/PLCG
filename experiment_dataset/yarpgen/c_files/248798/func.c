/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248798
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), ((~(max((314828802), (((/* implicit */int) (unsigned char)25)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_1 [i_0])))));
                    arr_7 [i_0 + 1] [(_Bool)1] [i_0] = ((/* implicit */short) arr_3 [5]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(var_11)))));
                    var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(314828802)))))) ? (((((/* implicit */_Bool) 314828802)) ? (max((var_5), (-314828782))) : ((~(((/* implicit */int) arr_8 [i_0 + 2] [(short)5] [i_0 + 2])))))) : (min((((/* implicit */int) var_8)), (max((-314828796), (var_5)))))));
                }
                for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    var_18 ^= ((/* implicit */long long int) ((((arr_4 [i_4] [(unsigned short)6] [i_0 - 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_0 + 1]))))) > (max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) > (-314828782)))), ((~(8075117806600815021LL)))))));
                    var_19 = ((/* implicit */int) min((var_19), (((((arr_1 [(short)0]) / (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0])))) / (((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 1])) ? (arr_1 [(unsigned short)0]) : (((/* implicit */int) var_1))))))));
                }
                var_20 = ((/* implicit */short) (-((-(314828778)))));
                arr_14 [i_0] = ((/* implicit */int) (~(min((((arr_4 [i_1] [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (-(var_10))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 314828782)) : (9ULL)))))) ? (((/* implicit */long long int) -314828799)) : (((((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [4] [i_1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : ((~(arr_4 [5] [i_0] [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -314828783)) ? (var_15) : (((/* implicit */long long int) 314828809))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)-8275))))))) : ((~((~(((/* implicit */int) (short)1))))))));
}
