/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2724
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2])) - ((+(((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_2] [i_1] [i_0])), ((short)14102))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-14663)) != (((/* implicit */int) (short)20357))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) arr_0 [i_1]);
                    arr_10 [i_0] = ((/* implicit */long long int) ((((((_Bool) arr_7 [i_2] [i_1] [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (966092727U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)57)) || (((/* implicit */_Bool) (unsigned char)44)))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_0] [i_0])))))));
                }
            } 
        } 
    }
    var_21 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3328874568U)))))) ? (var_5) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-4336)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (signed char)-57))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((long long int) arr_15 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_4 [i_3]))))));
                arr_16 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2861259754U)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) var_19))))) ? (((((/* implicit */int) (unsigned short)209)) + (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) ((short) 19ULL)))))));
                arr_17 [i_4 - 1] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_12 [i_3]))) + (((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 1] [i_4 + 2]))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12301))) : (18446744073709551597ULL)))) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_4] [i_4]))))) ? (((((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_1 [i_3])))) : (var_12))) : ((((-(((/* implicit */int) (short)(-32767 - 1))))) & (((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((2008938093) - (2008938093)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_24 = ((/* implicit */short) var_10);
                    arr_21 [i_3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_3] [i_4] [i_5]))) ? ((+(((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_5])))) : (((/* implicit */int) arr_14 [i_3] [i_3])))));
                    arr_22 [i_3] [i_3] [7U] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -201960531972594544LL)) ? (((/* implicit */int) arr_15 [i_3] [i_4] [i_5])) : (((/* implicit */int) (short)-4320))))) ? (((/* implicit */long long int) ((unsigned int) arr_19 [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) (-(-1585222385)))) ? (-201960531972594542LL) : (-201960531972594567LL)))));
                    var_25 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-101))));
                    arr_23 [i_3] [i_4 + 2] [i_5] [i_5] = ((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_4] [i_4] [i_5] [i_5])))));
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_26 [i_3] [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) (-(((arr_24 [i_3] [i_4 + 1]) ? (((/* implicit */int) ((unsigned short) (signed char)-41))) : (((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_0 [i_3]))))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)51)), (arr_5 [i_4])))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_4 - 1])) : (((/* implicit */int) arr_1 [i_6])))))));
                    var_27 = ((((/* implicit */_Bool) arr_1 [i_3])) ? (min((arr_19 [i_3] [i_4] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_6])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6])))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_3] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_28 = max((((/* implicit */short) (unsigned char)41)), ((short)-28034));
                        arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (arr_19 [(signed char)2] [i_6] [(signed char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_18 [i_3] [i_6])) : (arr_27 [i_3] [i_4] [i_4] [(unsigned short)5] [i_3]))) : (min((arr_27 [i_3] [i_4] [i_3] [i_7] [i_4]), (((/* implicit */int) arr_14 [i_3] [i_7])))))));
                        arr_32 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 2]) ^ (arr_19 [i_4 + 1] [i_4 + 2] [i_4 - 1]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))))));
                        arr_33 [i_3] [i_6] [i_6] [i_7] [i_7] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_3] [i_7])) : (((/* implicit */int) arr_4 [i_6]))))) ? (((((((/* implicit */int) (short)-11)) + (2147483647))) >> (((-4956258141169793150LL) + (4956258141169793158LL))))) : ((+(((/* implicit */int) arr_28 [i_3] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_3] [i_4 - 1])))) : (((((/* implicit */_Bool) ((short) arr_28 [i_3] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (8868048823768177904ULL)))));
                    }
                }
            }
        } 
    } 
}
