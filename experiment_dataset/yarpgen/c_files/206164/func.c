/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206164
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_5)))))) ? (arr_3 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6984291477997861448LL)) ? (((/* implicit */unsigned long long int) -5)) : (var_5)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((min((arr_11 [i_4] [i_3] [i_0] [i_2] [i_3] [i_0]), (((((/* implicit */_Bool) -921679969)) && (((/* implicit */_Bool) var_6)))))) ? (min((min((((/* implicit */long long int) var_6)), (6984291477997861448LL))), (((/* implicit */long long int) min((((/* implicit */int) var_11)), (-805826289)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3] [i_3] [i_1] [(_Bool)1]))) : (-6984291477997861448LL)))));
                                arr_12 [i_0] [i_0] [(unsigned short)3] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_2] [i_0]))))) : (min((max((2251799805296640ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (~(var_0))))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (arr_5 [20] [3U] [(short)12] [3U]) : (((/* implicit */int) arr_0 [i_3] [i_3])))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))) : (((((((/* implicit */_Bool) 6575479840897189087LL)) && ((_Bool)1))) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) -1435288880)) : (arr_7 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 6984291477997861448LL))))))));
                                arr_13 [i_0] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) (unsigned short)15716);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */_Bool) -9223372036854775780LL);
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((var_15), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) 3944759272363932904ULL)) ? (165669175) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_11))))) && (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)2123))))))));
}
