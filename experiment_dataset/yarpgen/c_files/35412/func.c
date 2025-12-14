/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35412
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((signed char) 2276467760583271259ULL));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) & (((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 1])))) : ((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-21968))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                    var_17 = ((/* implicit */signed char) 15301408454575162516ULL);
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_18 [i_4] [i_3 - 2] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned long long int) 8921301425706516130LL)) : (var_3))) >= (((var_9) - (((/* implicit */unsigned long long int) 5982425934003931402LL))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            var_19 = ((2147483647) << (((((arr_16 [i_6 - 2] [2] [i_4 - 1] [i_5]) + (842030966))) - (27))));
                            var_20 *= ((/* implicit */_Bool) (-(arr_16 [i_6 + 2] [i_6 + 2] [i_4] [i_4 - 1])));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (((/* implicit */unsigned long long int) -628959969617276879LL))))) ? (-4029185672530483186LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_3 + 1] [i_2]))))))));
                            var_22 += ((/* implicit */int) ((signed char) arr_12 [i_6] [i_3 - 1] [i_3 - 2] [i_3 - 2]));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) min((var_23), (var_7)));
                        /* LoopSeq 4 */
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((arr_22 [i_4] [i_4]) + (9223372036854775807LL))) << ((((~(var_7))) - (1998411616)))));
                            arr_26 [i_2] [i_4] [i_4] [i_7] = ((long long int) (-(70368744177664ULL)));
                        }
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_3 + 1] [i_4 + 1]))));
                            var_26 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 8725770307796098593ULL)) ? (arr_15 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) != (((((/* implicit */_Bool) 1298324387U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (arr_8 [i_2] [17ULL])))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_27 = (signed char)-106;
                            arr_32 [(short)3] [i_3 + 1] [i_4] [i_7] [i_10] = ((/* implicit */unsigned short) ((arr_22 [i_2] [i_4]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_30 [i_3] [i_3] [i_2]))))));
                        }
                        for (int i_11 = 4; i_11 < 21; i_11 += 2) 
                        {
                            var_28 *= ((/* implicit */signed char) ((int) (-(((/* implicit */int) (_Bool)1)))));
                            arr_36 [i_2] [(signed char)5] [i_4] [i_4] [i_11 - 4] = ((/* implicit */unsigned long long int) var_5);
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_10 [i_3] [i_4] [i_11]))) + (2147483647))) << ((((((+(-4029185672530483186LL))) + (4029185672530483188LL))) - (2LL)))));
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        arr_39 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) 3678677);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3 - 2] [i_4 - 1])) ? (8725770307796098583ULL) : (((/* implicit */unsigned long long int) ((int) var_2)))));
                    }
                    var_31 |= ((/* implicit */int) ((arr_19 [i_3 + 1] [i_4 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9720973765913453033ULL)) ? (((/* implicit */int) (unsigned char)117)) : (-2143660267)));
        arr_40 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned short)14] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)241)) << (((-6124883) + (6124890)))))) : (arr_15 [(short)20])));
    }
}
