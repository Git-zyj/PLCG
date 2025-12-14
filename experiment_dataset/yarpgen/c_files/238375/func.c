/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238375
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) max((var_14), (((/* implicit */int) (unsigned char)3))))) : ((-(var_12)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_20 &= min((arr_1 [i_0 - 4]), (((/* implicit */unsigned long long int) (((~(arr_0 [i_0] [i_0]))) << (((((/* implicit */int) max(((unsigned char)9), ((unsigned char)255)))) - (255)))))));
        arr_4 [i_0] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27412))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (max((((/* implicit */unsigned int) (unsigned short)38369)), (4294967282U))) : (((/* implicit */unsigned int) min((arr_3 [i_0]), (((/* implicit */int) arr_2 [i_0])))))))));
        arr_5 [i_0] [i_0 - 3] &= max((min((((/* implicit */long long int) (-(arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-3106676345653234224LL) : (((/* implicit */long long int) arr_3 [i_0])))))), (((/* implicit */long long int) (~(arr_0 [i_0 + 2] [i_0 + 2])))));
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [(signed char)1] = ((((/* implicit */int) (unsigned short)38369)) % (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) arr_8 [i_4]);
                                var_22 = ((/* implicit */unsigned char) (!(min(((!(((/* implicit */_Bool) 2647618816U)))), (arr_14 [i_5 - 1] [i_2 + 1] [i_2] [i_1])))));
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)255), (arr_6 [i_3] [i_2])))) - ((~(arr_18 [i_1] [i_2] [(unsigned char)5] [i_5] [i_2]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_11 [i_1] [i_1] [(_Bool)1] [i_1]))))))) | (max((arr_15 [i_1] [i_2] [i_3] [i_1 - 2] [(short)5]), (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_3] [i_1 - 2]))))));
                    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)61))));
                }
            } 
        } 
        arr_20 [i_1] &= ((/* implicit */unsigned short) arr_14 [(_Bool)1] [6U] [i_1] [i_1]);
        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) max(((unsigned char)71), (arr_16 [i_1] [i_1] [i_1] [i_1]))))))) ? (((int) arr_2 [i_1 + 1])) : ((-(((/* implicit */int) arr_11 [i_1 - 2] [i_1] [i_1] [i_1]))))));
        arr_22 [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) 
        {
            {
                arr_29 [i_6] [(unsigned short)20] |= ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_3 [i_6 - 1])), (((unsigned int) arr_24 [i_7]))))));
                var_25 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned char)0]))) / (max((((/* implicit */unsigned long long int) arr_27 [(unsigned short)18])), (arr_24 [i_7]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) (+(var_17)));
}
