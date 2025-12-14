/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214265
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
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_1 - 2]))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (-1177522953))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1 + 1] [i_1 - 2]))) ? (((((/* implicit */_Bool) 3748431858U)) ? (546535447U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0 + 2])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (3748431858U))) <= (arr_11 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_2 - 1]))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (816735605998186714ULL) : (((/* implicit */unsigned long long int) -2917578144515692610LL))));
                                var_23 = ((/* implicit */unsigned int) -2373298680855087030LL);
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((/* implicit */int) (unsigned short)52792)) + (942191235));
                            }
                            for (signed char i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
                            {
                                var_24 += ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_2 - 2] [i_3 - 1])) && (((/* implicit */_Bool) min((arr_8 [i_5 + 1] [i_2 + 1] [i_3 - 4]), (((/* implicit */int) (_Bool)1))))));
                                var_25 += ((/* implicit */unsigned long long int) (signed char)-20);
                                arr_17 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (+(-196834543)));
                            }
                            for (signed char i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
                            {
                                arr_22 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((((/* implicit */_Bool) 2128955123787215886ULL)) ? (((/* implicit */unsigned long long int) 144526858)) : (arr_2 [i_0] [i_1] [i_0]))) > (((/* implicit */unsigned long long int) ((((arr_18 [(unsigned char)2] [i_2] [(signed char)7]) + (2147483647))) >> (((var_14) - (6862684967111504566LL)))))))));
                                arr_23 [i_0 + 2] [i_0 + 2] [4ULL] [i_0] |= ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
                            {
                                arr_26 [i_7] = ((/* implicit */unsigned long long int) (unsigned char)192);
                                var_26 = ((/* implicit */int) (short)-4610);
                                var_27 -= ((/* implicit */unsigned long long int) (unsigned short)20568);
                            }
                            var_28 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3748431848U)))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_0] [i_0 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2]))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) >= ((-(2760871454U)))));
    var_30 ^= ((/* implicit */unsigned long long int) var_17);
}
