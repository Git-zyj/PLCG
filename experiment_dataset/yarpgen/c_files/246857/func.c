/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246857
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) + (max((0U), (((/* implicit */unsigned int) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((-796931700), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) || (((/* implicit */_Bool) var_6))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((short) arr_5 [(unsigned short)10] [i_1]));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_17 = ((/* implicit */_Bool) 0LL);
            var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_2])) : (((/* implicit */int) (short)28462))))) ? (((/* implicit */int) arr_4 [4])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_4 [i_1])))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) % (((/* implicit */int) max((var_13), (arr_5 [i_1 + 1] [i_1]))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1])))))));
            arr_9 [i_1] [i_2] = ((/* implicit */short) arr_0 [i_2]);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((signed char) (~(1131714354))));
                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_5 [4] [4]))))))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (max((((/* implicit */long long int) arr_4 [i_1])), (var_9))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 1]))) | (arr_12 [i_1 + 1] [i_2 - 2] [i_3 + 2])))))) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_6])), ((unsigned char)0)))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_7])) ? (((/* implicit */long long int) (-(-1249442408)))) : (-5406790342442758495LL))) : (((/* implicit */long long int) arr_16 [i_7]))));
                                arr_23 [i_7] [(_Bool)0] [i_4] [i_4] [7] [i_4] [i_1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)64856)) ? ((~(var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [19LL]))))))));
                                var_23 = (-(((unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1])));
                                arr_24 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4] [i_5] [i_6] [(_Bool)1] |= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_1])) >> (((((/* implicit */int) (short)-14860)) + (14888))))) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [(_Bool)1]))))) ? ((~(((/* implicit */int) var_0)))) : (max((2046576233), (((/* implicit */int) (short)3306)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_1] [i_1 + 1])) : (((/* implicit */int) (((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)10])))) > (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1])) || (((((/* implicit */_Bool) 13188894879829169688ULL)) || (((/* implicit */_Bool) arr_14 [i_1] [(unsigned short)11]))))));
    }
    var_27 |= ((/* implicit */unsigned int) max(((-(var_1))), (((/* implicit */long long int) (short)12042))));
    var_28 = ((/* implicit */_Bool) var_8);
}
