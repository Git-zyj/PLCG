/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206150
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) 154395823)) ? (((/* implicit */unsigned long long int) -154395824)) : (10828175686778004336ULL))))) | (((/* implicit */unsigned long long int) var_2))));
    var_17 = var_8;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min(((~(max((2318504589661337903ULL), (((/* implicit */unsigned long long int) -606383566459035564LL)))))), (((/* implicit */unsigned long long int) ((((((-316484347) + (2147483647))) << (((arr_1 [i_0]) - (9710103987988237601ULL))))) >= (((/* implicit */int) (signed char)-68)))))));
        var_19 = ((/* implicit */int) ((unsigned short) (signed char)-106));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 154395823)), (3408348459U)));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 238029719U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) >= (max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) 127U)) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned char)18])) : (arr_1 [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */long long int) (-(((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            var_22 ^= ((/* implicit */unsigned short) (((-(127U))) | (((((/* implicit */_Bool) 9992432256589009577ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29188))) : (127U)))));
            var_23 = ((/* implicit */unsigned char) ((arr_8 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1])))));
            var_24 = ((/* implicit */long long int) 4056937576U);
        }
        for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)14])))))) ? (var_1) : (((/* implicit */int) arr_7 [4ULL] [i_3 + 3] [i_3]))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_26 = (+(((/* implicit */int) (signed char)-39)));
                        var_27 = ((/* implicit */unsigned long long int) (-(arr_16 [i_3 - 1] [i_3] [i_1])));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_22 [i_6] [(unsigned char)11] [i_3] [i_5] [i_6] [i_4] = ((((/* implicit */int) arr_6 [i_1])) << (((arr_16 [i_3 + 3] [i_3 + 2] [i_3 + 1]) - (7513879410828345103LL))));
                            var_28 = ((/* implicit */signed char) arr_1 [i_5]);
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-25874))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_3 + 1] [i_5] [i_1] [i_6])) || (((/* implicit */_Bool) -12LL))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) (unsigned short)49470);
                            arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2081434448541620466ULL)) ? (2449468288594588794ULL) : (((/* implicit */unsigned long long int) 238029719U)))))));
                        }
                    }
                } 
            } 
        }
        arr_28 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((316484349) >= (((/* implicit */int) (signed char)62))))) - (((int) -154395825))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 4; i_8 < 15; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                {
                    arr_34 [i_1] [i_8 + 1] [i_9] = ((/* implicit */int) arr_20 [i_1] [i_8] [i_8] [i_9] [11LL]);
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (var_0)));
                    arr_35 [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41046)) || (((/* implicit */_Bool) arr_26 [i_8 - 3] [i_9] [i_9] [i_9 - 1] [i_9]))));
                    var_33 |= ((/* implicit */unsigned long long int) (signed char)51);
                    arr_36 [i_1] = ((/* implicit */unsigned char) arr_25 [i_1] [6ULL] [i_9] [i_1] [(unsigned char)1] [i_9]);
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) * (0LL)));
            arr_43 [i_11 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_10] [i_11 + 2] [i_11])) ? (max((((/* implicit */unsigned long long int) (unsigned char)87)), (5270258857276236156ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (signed char)50)))))))) + (max((((/* implicit */unsigned long long int) -8LL)), (15586639735756463782ULL)))));
            var_35 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 9622000611055627124ULL)) && (((/* implicit */_Bool) arr_1 [i_11 - 2])))));
        }
        for (long long int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) (unsigned short)24490);
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((886618837U) != (((/* implicit */unsigned int) -536965592))))), (((((/* implicit */_Bool) 42118468075665194LL)) ? (((/* implicit */unsigned long long int) 316484356)) : (6407180253214200879ULL))))) <= (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)-19545)), (-8LL))), (((/* implicit */long long int) var_1))))))))));
        }
        for (long long int i_13 = 2; i_13 < 16; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (max((min((var_13), (((/* implicit */unsigned long long int) 991804916U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_3)), (arr_46 [i_10])))))) : (((/* implicit */unsigned long long int) (~(((7941454512595468374LL) >> (((((/* implicit */int) arr_39 [i_10] [i_13 + 2])) - (43086))))))))));
                var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) & (((((/* implicit */_Bool) (unsigned char)171)) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 316484346)) & (3408348459U)))))));
                var_40 = ((/* implicit */signed char) arr_38 [i_13] [i_14]);
            }
            arr_51 [i_13] [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (17107128862599103345ULL)))));
            arr_52 [i_13] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)12277)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_13 + 2] [i_10])) >= (((/* implicit */int) arr_39 [(unsigned short)7] [i_10])))))) : (((unsigned long long int) (signed char)(-127 - 1))));
            arr_53 [i_10] [i_13] = ((/* implicit */long long int) (unsigned char)63);
        }
        var_41 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-24742)), ((unsigned short)56740)));
    }
    var_42 = ((/* implicit */int) min((var_2), (var_2)));
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 316484347)) || (((/* implicit */_Bool) (unsigned char)172))));
}
