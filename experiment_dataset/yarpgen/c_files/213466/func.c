/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213466
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6830)) ? (var_0) : (0))))))) ? (4294967278U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_4] [i_4] [i_3 + 1] [i_0] [i_4] [i_3 + 1])), (arr_11 [i_0] [i_1] [i_3 + 1] [i_4] [i_4] [i_1] [i_1]))))));
                                arr_16 [i_4] [i_4] |= ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_12 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) != (max((((/* implicit */int) (unsigned char)64)), (var_3))))))));
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) min((min((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1]))), (-9))), (8))))));
                    var_11 |= min(((+(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_1)))))), ((+(((int) var_3)))));
                    var_12 = max((((/* implicit */unsigned int) var_8)), (((((unsigned int) arr_5 [i_0])) + (((/* implicit */unsigned int) ((arr_9 [i_1]) ? (-9) : (-82594632)))))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (var_7)));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) (unsigned short)41701);
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0)), (var_5)))) ? (((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_5] [i_0] [i_0])) ? (arr_18 [i_0 - 1] [i_5] [i_0] [i_0]) : (arr_18 [i_0 + 2] [i_5] [i_0] [i_0]))) : (((/* implicit */int) ((short) arr_18 [i_0 - 1] [i_5] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) min((min((((/* implicit */unsigned int) (unsigned short)41691)), (arr_6 [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_5] [i_5])))))));
                    var_17 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) var_9)), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))))));
                }
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)0))))));
                var_19 = ((/* implicit */short) (+(min((arr_4 [i_0] [i_1] [i_0 - 1]), (var_0)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((int) (short)-21592))));
                            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((short) (unsigned char)223))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (11)))))));
                            arr_30 [i_1] [i_1] [i_8] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_6)) ? (3800706829172909897LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 3; i_13 < 18; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((((unsigned int) arr_37 [i_13] [i_13] [i_13] [i_14 + 1])), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27466)) ^ (((/* implicit */int) var_2)))))));
                                var_24 = ((-82594632) + (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)23834)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((_Bool) -2)) ? (((int) -2931522051037507438LL)) : (((/* implicit */int) ((short) (short)-21610)))))), (min((3868034385U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */int) (unsigned short)21790)) : (-1)))))))))));
                }
                var_26 = max((min((min((((/* implicit */unsigned int) -10)), (var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))), (max((arr_41 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) ((((var_3) + (2147483647))) << (((((var_3) + (1534743068))) - (3)))))))));
            }
        } 
    } 
}
