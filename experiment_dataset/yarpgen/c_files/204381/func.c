/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204381
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
    var_18 = ((/* implicit */unsigned char) (signed char)-1);
    var_19 = ((/* implicit */int) var_0);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || ((((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_13))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] = var_12;
                                var_21 = ((/* implicit */unsigned char) ((1101806053U) < (((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) ? (((var_6) + (((/* implicit */int) (signed char)29)))) : (((/* implicit */int) (unsigned short)22276)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2])) || (((/* implicit */_Bool) 8388608)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) var_13);
                                var_23 |= ((/* implicit */unsigned long long int) ((max((arr_0 [i_0 - 1]), (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 1])))) > (((arr_0 [i_0 + 1]) & (((/* implicit */int) (_Bool)1))))));
                                var_24 *= ((/* implicit */unsigned short) max((arr_16 [i_6]), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-19)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-27), (((/* implicit */signed char) (_Bool)1)))))) == (max((2194728288256LL), (((/* implicit */long long int) 3974170548U))))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)13548)))) > (((/* implicit */int) ((arr_23 [i_7 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))))))));
        var_26 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65526));
        var_27 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))) / (max((4294967293U), (((/* implicit */unsigned int) arr_21 [14ULL]))))));
        var_28 = ((unsigned short) -3210451016643627570LL);
    }
}
