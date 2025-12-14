/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22280
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) 3276001126874733517LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (min((-9223372036854775804LL), (((/* implicit */long long int) var_2)))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))))) : (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (min((((/* implicit */unsigned long long int) ((var_4) >> (((var_8) + (1246147858001323178LL)))))), ((-(3070284794340165822ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -5569645629600059256LL)) ? (-9222673491278115630LL) : (-6341345388934259124LL))))))));
                                var_21 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((min((12697861129811781548ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) << (((((/* implicit */int) min((arr_10 [i_0] [i_0]), (arr_2 [i_0])))) - (139))))) ^ (((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((var_5) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))) - (2377619368075156848ULL))))))))) : (((/* implicit */long long int) ((((min((12697861129811781548ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) << (((((((/* implicit */int) min((arr_10 [i_0] [i_0]), (arr_2 [i_0])))) - (139))) + (169))))) ^ (((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((var_5) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))) - (2377619368075156848ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)127))));
                            var_23 = ((/* implicit */signed char) var_8);
                            arr_19 [i_0] [i_0] [i_1] [i_2 + 1] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ ((~(6792544165531366133ULL)))));
                            arr_20 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                            var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)116)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 2] [i_2 + 2] [i_1 - 2]))) : (((arr_7 [(short)1] [i_5] [i_1] [i_0]) / (var_8)))));
                        }
                        arr_21 [i_0] [i_1] [i_0] [i_2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((_Bool) min((-4887942072324437569LL), (((/* implicit */long long int) (unsigned char)142))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_14 [i_0] [i_2 + 2] [i_0]))) + (2147483647))) << (((((/* implicit */int) min((arr_14 [i_0] [i_1] [i_0]), (((/* implicit */short) arr_4 [i_0]))))) - (93)))))) : (min((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_5])), (var_14))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [5LL]))))))) : (((/* implicit */long long int) ((((_Bool) min((-4887942072324437569LL), (((/* implicit */long long int) (unsigned char)142))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_14 [i_0] [i_2 + 2] [i_0]))) + (2147483647))) << (((((((/* implicit */int) min((arr_14 [i_0] [i_1] [i_0]), (((/* implicit */short) arr_4 [i_0]))))) - (93))) + (12641)))))) : (min((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_5])), (var_14))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [5LL])))))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 - 2] [i_1] [i_0])) > (((/* implicit */int) arr_14 [i_1 - 1] [0LL] [i_0]))))), (((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_0])))))));
                    var_26 = ((/* implicit */long long int) min(((unsigned char)236), (((/* implicit */unsigned char) (signed char)-123))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_4 [i_1]))))) - (8727373545472LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51115))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9061)) % (((/* implicit */int) (unsigned char)255))))) + (arr_13 [i_0] [i_1] [i_1] [i_0] [i_1])))) ? (14283853446757086223ULL) : (((((/* implicit */_Bool) min((-6341345388934259120LL), (((/* implicit */long long int) (short)-4558))))) ? (0ULL) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)7936))))))));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : (var_13)))) ^ (((unsigned long long int) arr_25 [i_0])))) - (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (var_10))), (((/* implicit */unsigned long long int) var_3))))));
                            var_30 *= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) + (18014398509481983ULL))), (708934021331695413ULL)));
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_0])) >> (((((((/* implicit */_Bool) 9223372036854775805LL)) ? (arr_23 [i_0] [(unsigned char)9] [i_1 - 3] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (1586722226251595050LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 2] [i_1 - 2] [i_1 - 2]))) ^ (arr_15 [i_1 - 3] [i_1] [i_1 - 3] [i_0] [5ULL] [i_1 - 3])))));
                var_31 *= ((/* implicit */long long int) ((((var_3) >> (((((((/* implicit */_Bool) (short)22224)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_28 [i_0] [(signed char)8] [i_1] [(signed char)8]))) - (2983LL))))) > (min((arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) (signed char)-11))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (4208050562621905778ULL)));
    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)))) ^ (((var_1) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_15))))), (((/* implicit */unsigned long long int) ((long long int) max((545353437262426644LL), (var_11))))))))));
}
