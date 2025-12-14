/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238412
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = arr_2 [i_1];
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((_Bool) (!(((/* implicit */_Bool) var_2))))), (((_Bool) arr_6 [i_1] [i_1] [i_1 + 1]))));
                                arr_16 [i_1] [i_4] = ((/* implicit */short) (unsigned char)60);
                            }
                        } 
                    } 
                } 
                var_16 = ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 1] [8ULL] [8ULL] [(short)1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0] [i_0 + 2]))) >= (1125899369971712ULL))))))) ? (6649296209055857056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    var_17 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)124)) ? (5783189160892027384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned long long int) (signed char)-54)), (16154088041997063775ULL)))));
                    var_18 *= min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_1] [i_1] [i_1 + 1])) % (((/* implicit */int) arr_10 [i_0] [i_0]))))), (max((2382260545657207078ULL), (15659440111758862535ULL))))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551608ULL))), (((unsigned long long int) arr_6 [15ULL] [15ULL] [(short)12])))));
                    arr_19 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(16064483528052344546ULL)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)5955)), ((-(((/* implicit */int) arr_17 [i_0 - 1] [i_1 + 1] [i_0] [i_1]))))))) != (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) | (((/* implicit */int) arr_17 [i_0 + 2] [i_1 - 1] [i_5] [i_1]))))), (max((0ULL), (arr_2 [i_1])))))));
                    var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)-8))))));
                }
            }
        } 
    } 
    var_21 = ((signed char) var_7);
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) max(((signed char)-13), (((/* implicit */signed char) (!((_Bool)1))))))))))));
}
