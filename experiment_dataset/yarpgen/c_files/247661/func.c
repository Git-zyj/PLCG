/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247661
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((arr_10 [18LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_2]))))))) ? (7982804681096506085ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
                                arr_13 [i_0] [20ULL] [i_2] [20ULL] [20ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [(unsigned short)15])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_4 - 1] [17LL] [i_3] [i_2] [i_1] [(unsigned char)7] [i_0])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_6 [i_0]))))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(unsigned short)9] |= ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [(_Bool)1] [(unsigned short)0] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_7 [19ULL] [19ULL] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */int) arr_6 [i_2])), (330806865))) : ((~(((/* implicit */int) (_Bool)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                                arr_21 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)10] [i_1] [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
                                arr_22 [i_0 + 1] [i_1] [i_2] [i_5] [17ULL] = ((/* implicit */unsigned long long int) ((min((arr_16 [(signed char)16] [i_0] [i_0 + 1] [(unsigned char)2] [i_0 - 1]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))) ? (((((/* implicit */int) arr_17 [i_5] [i_6] [i_2] [i_0 + 1])) & ((-(((/* implicit */int) (short)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (+(var_3)))))))));
                                var_20 = ((/* implicit */short) ((_Bool) -5256292527195119990LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */int) (!(min(((_Bool)1), (arr_16 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                var_23 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((_Bool) var_3))))) : (((/* implicit */int) min((arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                /* LoopNest 3 */
                for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7] [i_9 + 2] [i_9 + 2] [i_8 - 1])) ? (((((((/* implicit */_Bool) 1742761160U)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_34 [3] [i_8] [i_9] [i_8] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53536))) : (2552206135U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_18 [(signed char)8] [(short)12] [i_9 + 2] [i_8 - 1] [i_7] [i_7])))))) : (min((((/* implicit */unsigned int) arr_9 [i_8] [i_8 - 1] [i_8] [i_9] [i_9 + 2] [i_10])), (min((232057077U), (((/* implicit */unsigned int) (_Bool)1))))))));
                                arr_35 [i_7] [i_8] [i_10] [i_11] = ((/* implicit */long long int) (_Bool)0);
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_10 [i_11] [i_8] [18]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((var_10) && (((/* implicit */_Bool) var_0))));
}
