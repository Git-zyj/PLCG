/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207056
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
    var_17 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_13)))) & (16586658586071659473ULL))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1860085487637892143ULL)) ? (16586658586071659473ULL) : (16586658586071659465ULL)));
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(var_7)))), ((+((+(arr_2 [i_0] [(_Bool)1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) ((arr_5 [i_1] [i_1]) >> (((((arr_3 [(_Bool)1] [12U]) & (((/* implicit */unsigned long long int) var_14)))) - (758399210447317057ULL)))));
                var_22 = ((/* implicit */int) 1860085487637892142ULL);
            }
            for (int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                            var_25 ^= ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_4] [i_0]);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)7] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (arr_13 [i_1 + 1] [i_3] [i_4] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5]))))))))));
                            var_27 = ((/* implicit */int) ((unsigned int) (+(arr_13 [i_0] [i_0] [i_3] [i_4]))));
                        }
                    } 
                } 
                arr_18 [i_1] = var_0;
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_28 ^= (+(arr_16 [i_0] [i_0] [i_1] [i_0] [i_6]));
                    var_29 &= ((/* implicit */short) 4005311865U);
                    var_30 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_6 - 1]))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    var_31 &= ((/* implicit */signed char) ((((arr_2 [i_7] [i_1]) * (((/* implicit */unsigned long long int) var_7)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned short) arr_16 [i_1] [i_1] [i_1 + 1] [i_3] [i_1 + 1])))));
                }
                var_33 = ((/* implicit */short) var_2);
            }
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((arr_3 [i_0] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            var_35 -= ((/* implicit */signed char) ((unsigned char) ((arr_3 [i_0] [i_1]) >> (((arr_21 [16LL] [i_1] [i_0] [i_1]) - (87497308U))))));
        }
        var_36 = ((/* implicit */signed char) (+(((6454909198082369707ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
    }
    var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((unsigned int) var_3)), (((/* implicit */unsigned int) var_12))))) ^ ((+(((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
}
