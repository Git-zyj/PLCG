/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249874
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) var_8);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_2 - 1] [i_3 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)3130)) ? (242262347U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))))))) | (((/* implicit */int) (unsigned char)146))));
                            arr_15 [i_0] [i_0] [i_1] [i_3 - 2] [i_3 - 2] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_1] [i_1])))))))) * (((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) var_11)) == (((/* implicit */int) arr_7 [i_1] [(signed char)9])))))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_4 [i_0]))));
                            var_19 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_9 [i_0] [i_1])), (((((/* implicit */unsigned long long int) 1254523326)) / (min((((/* implicit */unsigned long long int) (unsigned char)114)), (1469892250826069784ULL)))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = arr_0 [i_0];
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_20 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_5] [i_3 - 2])) : (-1))), ((+((-(((/* implicit */int) var_5))))))));
                            var_21 = ((((/* implicit */_Bool) max((((long long int) arr_5 [i_1] [i_1])), (((/* implicit */long long int) min((1098172511U), (((/* implicit */unsigned int) var_0)))))))) && ((!(((/* implicit */_Bool) (signed char)55)))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_3))))));
                            arr_22 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_9)) < (((/* implicit */int) arr_13 [i_1] [i_3] [i_1] [i_5] [6] [i_1] [i_5 - 1]))))));
                        }
                        var_22 = ((/* implicit */long long int) ((int) max((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))), (((/* implicit */unsigned long long int) -1)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((_Bool) (signed char)-55));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) <= (((/* implicit */int) var_10))))) <= (((/* implicit */int) (_Bool)1)))) ? (3515239622109616531ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)35677)))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_2] [i_3] [i_7] [i_7])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [2U] [2U] [(signed char)3] [i_3] [2U])) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_3] [i_7])))) : (((((/* implicit */int) (signed char)55)) / (((/* implicit */int) var_11))))));
                            var_26 *= ((((/* implicit */unsigned int) (-(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) | (((unsigned int) (signed char)70)));
                        }
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-49)), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (((((/* implicit */_Bool) var_7)) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                    }
                } 
            } 
        } 
    }
}
