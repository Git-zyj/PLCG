/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20129
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
    var_19 = ((/* implicit */unsigned char) (short)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (unsigned char)159);
        var_21 = ((/* implicit */unsigned char) min((((short) ((((/* implicit */int) (short)-32754)) + (((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */short) ((unsigned char) arr_0 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)32736)))) * (((/* implicit */int) ((unsigned short) (short)-9796)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_1 [i_0 + 1] [i_1 + 3])))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 = arr_8 [i_1] [i_1] [i_3];
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) var_18)), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((int) arr_6 [i_1] [i_0]))))));
                            var_24 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (min((arr_7 [(unsigned char)3] [9ULL] [i_3]), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) arr_5 [i_0 - 2] [i_1 + 1])))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_4])) && ((_Bool)1))))))))))));
                            var_26 = ((unsigned char) ((unsigned long long int) 0ULL));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_18 [i_0] [i_0] [i_0] [7] = ((short) arr_4 [i_0 - 2] [i_0 - 2]);
                var_27 = ((/* implicit */unsigned char) ((arr_7 [i_1] [i_1] [i_1 - 2]) % (var_6)));
            }
            arr_19 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            arr_20 [(unsigned char)6] [4ULL] [i_1] = ((/* implicit */unsigned char) (-((-(arr_14 [2])))));
            var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 1])))), ((!(((/* implicit */_Bool) var_6))))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((min((((1631061842) << (((((/* implicit */int) var_15)) - (100))))), (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))));
                            arr_31 [i_0] [i_0 - 1] [i_6] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -1830835290)) ? (((unsigned long long int) (_Bool)1)) : (16002877832823348380ULL)))));
                        }
                        for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_29 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_6 - 1])) ? (arr_12 [i_0] [(signed char)4] [i_0 - 2] [(unsigned char)0] [i_6 + 1]) : (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_6 + 1]))) / (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) -696758479)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))))));
                            var_30 = (+(((((/* implicit */_Bool) arr_24 [i_1 + 3] [i_1] [i_1] [i_0 - 2] [i_1 + 3] [i_9])) ? (((/* implicit */int) arr_24 [i_1 + 3] [i_1 + 3] [i_7] [i_0 - 2] [9] [i_1 + 3])) : (((/* implicit */int) (signed char)2)))));
                            arr_34 [i_6] [i_7] [i_6] [i_0 - 2] [i_6] = ((/* implicit */unsigned char) max(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_16 [i_7] [i_6 - 1] [i_1]))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((int) ((((((/* implicit */_Bool) (unsigned char)67)) || (((/* implicit */_Bool) 15)))) ? (((1830835289) - (var_14))) : (((/* implicit */int) (_Bool)1))))))));
                        }
                        var_32 *= ((((/* implicit */_Bool) 14790880345287668991ULL)) ? (((((/* implicit */_Bool) min((487207573), (((/* implicit */int) (unsigned char)173))))) ? (((/* implicit */int) arr_21 [i_7] [i_1] [i_6] [i_6])) : (var_16))) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_7])));
                        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) arr_24 [i_7] [i_1 + 3] [i_6 + 1] [i_1 + 3] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) ((unsigned char) 14030958789520055464ULL)))))) || (((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-18))))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)13)))) + (2147483647))) >> (((/* implicit */int) min((arr_33 [(signed char)4]), (arr_33 [(unsigned short)6])))))))));
    }
    var_35 &= ((/* implicit */unsigned long long int) (_Bool)1);
}
