/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225648
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [i_1] = ((/* implicit */short) -2164646849583137454LL);
                    var_12 = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (max((2077628792437321819LL), (((/* implicit */long long int) arr_4 [i_0] [14] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3 - 2]))))))))) ? (((((((/* implicit */_Bool) (short)9659)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 - 2] [i_3] [i_1]))) : (var_3))) << (((-1540802275) + (1540802334))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2701725108375855445ULL)) && ((_Bool)1))) && (((/* implicit */_Bool) -1540802291))))))));
                                var_13 = min((((((/* implicit */_Bool) (unsigned char)127)) ? (((((/* implicit */_Bool) -1540802295)) ? (-1540802296) : (-1540802269))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((16863922932605440328ULL) << (((((/* implicit */int) arr_10 [i_1] [i_1] [i_4])) + (16334))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_8 [i_1] [i_3 - 1] [i_4]))))))))));
                                var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [16ULL])))) != (((/* implicit */int) arr_6 [14U] [i_3] [i_4])))) ? ((+(((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)13])) : (((/* implicit */int) arr_14 [(short)10] [(short)10] [i_2 + 1] [i_1] [i_4 - 2])))))) : (-1540802251)));
                                arr_16 [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) min((min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7))))), (((arr_11 [i_0] [i_1] [13U] [i_2 + 1] [i_3] [i_4]) ? (((/* implicit */int) var_4)) : (var_5))))), (1540802271)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) ? ((~(-1540802267))) : (((/* implicit */int) ((((((/* implicit */int) arr_12 [i_0] [11ULL] [6] [i_7])) | (-1540802267))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13))))))))))));
                            var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_1] [i_5] [i_6] [i_7])) == (((/* implicit */int) (signed char)25)))) ? (min((253952), (((/* implicit */int) (unsigned char)35)))) : ((((~(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (_Bool)1))))));
                            arr_26 [i_0] [i_1] [i_5 + 1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_24 [i_0] [i_1] [i_5] [i_6] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_5]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_6])) != (1540802287)))) : (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-28041))))))) ? (((((/* implicit */_Bool) min((var_11), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) (unsigned char)72)))))) : (((((/* implicit */_Bool) (short)-28058)) ? (var_3) : (10241333359975344629ULL))))) : (min((((/* implicit */unsigned long long int) var_4)), (1691293802635042242ULL)))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)13572)) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-34)) && (((/* implicit */_Bool) 4294967289U))))))))) < (17U)));
                        var_18 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_1] [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (4008746484U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                    }
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_6))));
                        /* LoopSeq 2 */
                        for (int i_9 = 3; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) var_0);
                            arr_34 [i_0] [i_1] [i_1] [10] [i_8] [i_8] [i_9 - 1] = ((/* implicit */short) arr_25 [(_Bool)1] [i_1] [i_5] [i_1] [i_0]);
                            arr_35 [i_1] [i_0] [i_1] [i_1] [i_8] [i_9 - 2] [i_9 + 1] = ((/* implicit */unsigned char) arr_10 [23U] [(short)2] [i_8]);
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_9 + 1])) << (((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)28672))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) != (((/* implicit */int) arr_30 [i_0] [i_1] [i_8])))))) : (max((((/* implicit */unsigned long long int) 2147483647)), (arr_28 [i_0] [i_0] [i_1] [i_5] [i_1] [i_9 - 1])))))));
                            arr_36 [6U] [i_1] [i_5 + 1] [i_8] [i_9 - 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_17 [i_8] [i_8])));
                        }
                        for (int i_10 = 3; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            arr_39 [3LL] [3LL] [i_1] [i_10 + 1] = ((/* implicit */int) arr_27 [i_10] [i_0] [i_1] [i_5] [i_1] [i_0]);
                            arr_40 [i_1] [i_8] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (299789565U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18978))))) == (((((/* implicit */_Bool) 2251765453946880LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_10 - 2]))) : (2102010557U)))))) : (((((/* implicit */int) ((arr_11 [i_0] [i_1] [i_5] [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) arr_22 [i_0] [(short)15] [i_8] [21ULL]))))) | ((~(((/* implicit */int) (signed char)21))))))));
                            arr_41 [i_0] [i_1] [14U] [i_1] [6ULL] [i_10] = ((/* implicit */short) var_4);
                            var_21 = -658758198;
                        }
                        var_22 = ((/* implicit */long long int) max((((/* implicit */short) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (3161747742966189913ULL)))))))), ((short)28043)));
                        arr_42 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        arr_43 [(signed char)5] [i_1] [(unsigned short)17] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((286220839U) & (var_6)))) ? (((((/* implicit */_Bool) arr_17 [9] [4ULL])) ? (((/* implicit */int) (short)-23464)) : (((/* implicit */int) (short)28047)))) : (-397469320))) & (((/* implicit */int) (short)7318))));
                    }
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
                        var_24 &= ((((/* implicit */_Bool) var_1)) ? ((-((-(17364102061911947792ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32748)) & (((((/* implicit */int) arr_22 [i_0] [17] [17] [i_11])) | (((/* implicit */int) arr_1 [i_11]))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)28047)) ? (3552127391U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (unsigned short)65516))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_11]))))))));
                        arr_46 [i_1] [i_5] [0ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_11]))))) : (((((/* implicit */_Bool) -1540802279)) ? (arr_28 [i_0] [i_1] [i_1] [(signed char)19] [i_11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1388742990U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12984))) : ((((_Bool)1) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)28060))))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(short)3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)2)))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 24; i_13 += 4) 
                        {
                            {
                                var_26 *= ((/* implicit */_Bool) max(((unsigned short)52551), (((/* implicit */unsigned short) max(((short)28163), (((/* implicit */short) var_4)))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (var_3)));
                            }
                        } 
                    } 
                    arr_52 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_4);
                }
                var_28 = ((/* implicit */short) (+((~(2645115798U)))));
                arr_53 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) 438136250U)) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1])), (3856831046U))))))));
                var_29 = ((/* implicit */unsigned char) arr_49 [i_0] [0U] [(signed char)0] [i_0] [i_1]);
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_8)));
}
