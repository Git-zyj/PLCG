/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212286
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) min((3101901845U), (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) < (-219214892))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (short)-14828)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
            var_20 = ((/* implicit */unsigned long long int) (~((~(-1609208835)))));
            var_21 = ((/* implicit */short) (+(arr_2 [i_0])));
            var_22 = ((unsigned short) (+(arr_0 [i_0])));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_10 [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_5 [i_0] [i_2]))))) ? (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_0]) : ((~(var_17))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)14704)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))) : (arr_4 [i_0] [i_0] [i_2]))))))));
            var_23 -= max((((/* implicit */int) min((var_13), (((short) arr_4 [i_0] [i_0] [i_2]))))), ((-(((/* implicit */int) ((unsigned short) -1566453768))))));
            var_24 += ((/* implicit */unsigned int) var_12);
        }
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) ((_Bool) (-(min((var_3), (((/* implicit */unsigned int) (unsigned char)4)))))));
            arr_13 [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)140)) < (-1576631165)));
        }
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_26 &= ((/* implicit */unsigned char) arr_14 [7ULL]);
                /* LoopSeq 3 */
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27019))) ^ (((long long int) (unsigned char)115)))))));
                    var_28 ^= ((/* implicit */_Bool) var_12);
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_23 [i_4 + 2] [i_4 - 1])), (arr_11 [i_4 - 1] [i_4 + 2] [i_4 - 1])))));
                    arr_24 [16LL] [i_0] [i_5] [i_5] [i_5] = ((max((arr_20 [i_0] [i_0] [i_4 + 1] [i_5] [i_7] [i_7]), (arr_20 [i_0] [i_0] [i_4 - 1] [i_5] [i_5] [i_7]))) / (arr_20 [i_0] [i_4] [i_5] [i_5] [i_7] [i_7]));
                    arr_25 [i_7] [15] [(unsigned short)16] [(unsigned short)16] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_4 - 1] [i_7]), (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))) : (var_8)));
                }
                for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_30 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_5] [i_8] [i_8]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9329))) : (var_3)))) : (((var_17) % (((/* implicit */unsigned long long int) var_2))))))));
                    var_31 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)102)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0])))))))) ? (((/* implicit */int) arr_18 [8U] [i_4] [i_4] [i_8] [i_5])) : (((/* implicit */int) var_9)));
                    arr_28 [16] [i_4] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) arr_15 [i_5] [i_5]);
                }
                arr_29 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */int) arr_17 [(unsigned short)13] [i_4])), (max((((/* implicit */int) (short)8026)), ((~(((/* implicit */int) (unsigned char)140))))))));
                arr_30 [(_Bool)1] = ((/* implicit */unsigned char) arr_5 [i_4] [i_4]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 2708899314U)))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1198343497U)) ? (((/* implicit */int) min((arr_27 [i_4 + 1] [i_4 + 1] [3U]), (((/* implicit */short) var_12))))) : (((/* implicit */int) var_5))));
                arr_34 [i_9] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (int i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    var_33 -= ((/* implicit */unsigned long long int) ((signed char) 182089900));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_40 [(unsigned short)2] [(short)12] [(unsigned short)2] [i_9] [8LL] [i_10] [(signed char)5] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_38 [i_0] [i_4] [i_9] [i_10 + 1] [i_4]))))) ? (((((/* implicit */_Bool) 182089900)) ? (arr_2 [i_11]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_10])) % (((/* implicit */int) arr_16 [i_11]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_4] [i_0] [i_10] [i_10])))));
                        arr_41 [i_0] [17] [i_4 + 1] [i_9] [17] [i_10] [i_10] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) 1608222562))), (((((/* implicit */_Bool) arr_15 [i_11] [i_11])) ? (arr_32 [i_0] [i_4 - 1] [i_9] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10 + 1] [i_9])))))));
                        var_35 = ((/* implicit */unsigned long long int) arr_14 [i_10 + 1]);
                    }
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        arr_44 [i_10] [i_4] [i_4] = ((/* implicit */int) (~(((arr_36 [i_10] [i_9] [i_10] [i_10]) & (arr_36 [i_10] [i_10 + 1] [i_10] [i_10])))));
                        var_36 |= min((((/* implicit */unsigned long long int) arr_18 [(unsigned short)6] [i_4] [i_9] [i_0] [i_12])), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0]))))) - (((arr_36 [i_12] [i_9] [i_10] [i_9]) % (((/* implicit */unsigned long long int) arr_2 [i_9])))))));
                        var_37 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) % (((/* implicit */int) arr_22 [i_0]))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)54)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1]))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_38 = ((/* implicit */_Bool) (unsigned char)97);
                        arr_48 [i_10] = ((/* implicit */unsigned int) max((((long long int) min((1455739489U), (((/* implicit */unsigned int) (unsigned char)101))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_10 - 1] [(_Bool)1])) ? (((/* implicit */int) min(((short)20237), (((/* implicit */short) (_Bool)1))))) : (var_0))))));
                        var_39 -= ((/* implicit */unsigned short) min(((+((-(2015955031))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (~(1155131813460235074LL)))))))));
                    }
                }
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (min((((((/* implicit */_Bool) arr_37 [i_0] [i_4] [i_9] [i_9] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_4] [5LL] [i_4 + 2] [i_0]))) : (arr_11 [i_9] [i_9] [i_9]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_4] [i_4 + 2] [i_4] [8LL])))))))));
            }
            var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
            arr_49 [i_4] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_31 [i_4 - 1] [i_4] [i_4 + 1])), (arr_35 [i_4 + 1] [i_4 + 2]))), (((/* implicit */unsigned int) (_Bool)1))));
            arr_50 [i_0] = ((/* implicit */unsigned char) var_14);
        }
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (min((((/* implicit */unsigned long long int) ((int) min((var_10), (((/* implicit */unsigned short) arr_22 [i_0])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_18 [(_Bool)0] [12ULL] [i_0] [i_0] [(signed char)8])) : (((/* implicit */int) var_6))))) | (arr_0 [i_0])))))));
    }
    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
    {
        var_43 += ((/* implicit */unsigned short) (short)29364);
        var_44 -= ((/* implicit */_Bool) min((arr_27 [i_14] [i_14] [(short)17]), (((/* implicit */short) ((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) : (arr_2 [i_14]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))))));
        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_14] [i_14] [i_14])) ? (3174799150677669744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))) ? ((~(((/* implicit */int) arr_5 [18] [i_14])))) : (((((/* implicit */_Bool) (unsigned short)64233)) ? (((/* implicit */int) arr_1 [i_14])) : (1049802334)))));
    }
    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
    {
        var_46 += ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) 2100076668)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_15] [i_15])))) / (((/* implicit */int) arr_23 [i_15] [i_15])))));
        arr_55 [i_15] [i_15] = ((/* implicit */_Bool) min((arr_19 [i_15] [(signed char)1] [i_15] [i_15] [i_15] [5]), (((/* implicit */unsigned short) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21465)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1310))) : ((-(10625371677600346096ULL)))));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_59 [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) var_16);
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) arr_11 [i_15] [i_15] [10U]))));
            arr_60 [i_16] [10LL] = ((/* implicit */unsigned int) ((short) ((unsigned char) (_Bool)1)));
            var_49 = ((/* implicit */short) min((((((_Bool) 731001328544828702LL)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) ((var_11) <= (-731001328544828703LL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) > (-182722537))))))));
        }
        arr_61 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)96)), (arr_12 [i_15] [i_15])))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_11 [i_15] [i_15] [i_15])) : (var_18))), (((/* implicit */unsigned long long int) ((long long int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)5] [i_15])))));
    }
    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
    {
        var_50 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 135633150514511063ULL)) ? (((/* implicit */int) arr_62 [i_17])) : (((/* implicit */int) arr_62 [i_17]))))) : (((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_62 [i_17]))))) : (35184363700224LL))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 4; i_18 < 22; i_18 += 3) 
        {
            var_51 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [6ULL] [i_18 - 3] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_66 [(short)6] [i_18])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [(unsigned short)11]))) : (70368744177663LL))));
            var_52 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((int) 9223372036854775807LL)))), (min((((/* implicit */unsigned long long int) max(((short)8093), (((/* implicit */short) (signed char)-48))))), (arr_64 [(unsigned char)16] [(signed char)8])))));
        }
        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)153)), (((((/* implicit */_Bool) arr_63 [i_17])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned char)153))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_63 [i_17])))))));
    }
    var_54 *= ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-43)), (max((var_16), (((/* implicit */unsigned char) (signed char)46))))));
    var_55 = ((/* implicit */unsigned long long int) ((((unsigned int) (signed char)-52)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (signed char)112))))) ? (min((var_0), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-1317)))))))));
}
