/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54719
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)0)))) > ((+(((/* implicit */int) var_7))))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((((/* implicit */int) (short)14153)) << (((((((/* implicit */int) var_13)) + (20240))) - (28))))) : (((/* implicit */int) (short)14153)))) - (28298)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */long long int) arr_3 [13] [5U] [i_1 + 2])) : (((var_12) - (((/* implicit */long long int) arr_1 [(unsigned char)7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_12)))))));
                var_18 += ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19758))) % (var_6))))));
                var_19 = ((/* implicit */long long int) ((signed char) (_Bool)0));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_7 [8LL] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (unsigned char)10)) ? (22827485U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
        var_20 += ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned char)10)) / (((/* implicit */int) (unsigned short)15886))))))));
        var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) - (var_6)))) ? ((+(0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_11)))))))));
        var_22 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)32766)))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-20828)) : (((/* implicit */int) (signed char)5))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (var_12))))))));
                        arr_16 [i_3] [i_3] [3] [i_3] [i_3] [3] = var_8;
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))));
                        var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) arr_2 [i_3])) : (((((/* implicit */int) (_Bool)1)) << (((9223372036854775807LL) - (9223372036854775782LL)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        var_26 += ((/* implicit */_Bool) var_7);
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-108))) ^ (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))))));
                        arr_21 [6U] [(signed char)1] [(signed char)1] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_2] [(short)9] [(short)2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (arr_1 [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-20828)))))))) ? (arr_12 [i_2] [i_3] [(unsigned short)0] [(signed char)7] [i_6 - 1] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20963)) * (((/* implicit */int) (unsigned char)0)))))));
                        arr_22 [i_3] [(_Bool)1] [i_4] [6] [(signed char)2] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)10))))))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((((!(((/* implicit */_Bool) var_7)))) && (((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) var_4)))))) && (((((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3] [(short)0])) && (((/* implicit */_Bool) var_10)))) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3)))))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_13)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_4] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)127))))) / ((-(var_12)))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)31956))))))));
                    }
                }
            } 
        } 
    }
}
