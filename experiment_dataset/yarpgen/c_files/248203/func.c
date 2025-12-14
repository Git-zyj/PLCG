/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248203
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
    var_13 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_14 = ((/* implicit */signed char) ((short) arr_4 [(unsigned char)21] [(unsigned char)21] [(unsigned char)21]));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))));
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) (signed char)0)) ? (arr_10 [i_0] [i_1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1]))))) + (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0]))) ^ (arr_1 [i_1]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-7444)), ((unsigned short)0))))))));
                                var_17 ^= ((/* implicit */_Bool) ((unsigned char) (+(min((var_6), (((/* implicit */int) (short)-29963)))))));
                                var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((long long int) (short)7456)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1]))) : (arr_1 [i_3 + 1]))))));
                                arr_17 [i_4] [12U] [i_1] [i_1] [i_5] = max((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (short)-7457)) : (((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_8 [i_0] [i_1] [i_4 + 1] [i_5])))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((_Bool)1), (var_11)))), (((unsigned short) var_4))))) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : ((-(((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_3] [i_4] [(short)22])), (var_9))))))));
                            }
                            for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
                            {
                                arr_22 [i_6] [(unsigned char)20] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2])) ? (((/* implicit */int) (short)7456)) : (((/* implicit */int) arr_8 [i_0] [12U] [i_3 + 1] [i_4])))))));
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)-14), ((signed char)0))))));
                            }
                            arr_23 [i_1] = ((/* implicit */long long int) arr_13 [i_3] [i_1]);
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                var_21 = (((((!(((/* implicit */_Bool) (short)-2877)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)2)))))) << (((/* implicit */int) var_2)));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [i_0] [(unsigned char)10] [i_1] [i_1] [20U]), (((/* implicit */short) arr_6 [i_1] [(short)16] [i_1]))))) ? (((((arr_25 [i_0] [i_1] [(short)11] [i_1] [i_7 + 1]) >> (((arr_7 [i_0] [i_0] [i_0]) + (1530685589561030030LL))))) & (((/* implicit */unsigned long long int) (~(37637264342896693LL)))))) : (((/* implicit */unsigned long long int) 2341655395U))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) ((9007182074871808LL) <= (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_13 [i_8] [i_1])) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) arr_8 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1])))), (((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)))))))));
                                var_24 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) (-(arr_0 [i_0] [i_0]))))), ((+(((((/* implicit */_Bool) 5433883277659789942ULL)) ? (1178613047U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24214)))))))));
                                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (((((/* implicit */_Bool) (unsigned short)24240)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56631))) : (7651640183086289245LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned long long int) arr_16 [i_0] [i_0] [i_3] [i_4] [i_8] [14] [i_0])))))));
                                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_1] [i_1] [i_10]);
                            var_28 ^= ((/* implicit */signed char) (unsigned short)65535);
                        }
                    } 
                } 
            }
        } 
    } 
}
