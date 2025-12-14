/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46554
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)64), (((/* implicit */unsigned char) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))))) : (min((var_0), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)7)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [20U])) << (((var_7) - (1703514488U)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (var_4)))))) ? (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1042076246635198046ULL))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)6])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -432696155)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_3 [i_0]))))))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((-5460652590457325123LL), (((/* implicit */long long int) (unsigned short)7007)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) (short)-8692)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 &= ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_3 [i_1])));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [(signed char)4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)1]))) : (arr_5 [i_4]))) < (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)84)) + (((/* implicit */int) arr_3 [i_1]))));
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) 1020752392149042307ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1224128384)) ? (var_4) : (var_2)));
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (719363384138472121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 1])))));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 1] [i_1]))) : (4294967267U)));
                            var_25 = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22620)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)23681))))) : ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_3] [i_2] [(short)18] [(short)18] = ((((/* implicit */int) (_Bool)1)) | (-2147483632));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_0 [i_1])))) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (short)8679))));
                        }
                        for (int i_7 = 2; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_3] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_1]))) : (var_2))) : (((/* implicit */unsigned long long int) arr_17 [i_7 - 1] [i_1] [i_7 - 1] [i_7] [(_Bool)0])))))));
                            arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1299568768212664982ULL)) ? (4481673267474070925ULL) : (var_5)))) ? (((((/* implicit */_Bool) arr_26 [i_1] [17U] [(short)3] [(short)3])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_9 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (unsigned char)159))))));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_3))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (811862525) : (((/* implicit */int) arr_4 [(signed char)13])))))));
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)0)) : (-1683316330)));
    }
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1654848446)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_4)))) ? (((((/* implicit */_Bool) 65532)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)20362)))) : (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) max(((short)-10610), (((/* implicit */short) (unsigned char)252))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2700))) : (var_5))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1)))))))))));
}
