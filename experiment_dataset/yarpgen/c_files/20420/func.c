/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20420
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [(unsigned short)12] = ((/* implicit */short) (+(((/* implicit */int) (signed char)22))));
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_11))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4752766800172912502LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (((((/* implicit */_Bool) 10470635684015063762ULL)) ? (2182245061969506937ULL) : (((/* implicit */unsigned long long int) -9223372036854775791LL))))))) ? (var_12) : (17073973930317812263ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((((/* implicit */_Bool) var_8)) ? (-7408963311360250404LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) / (var_3))))))) ? (((arr_8 [i_0] [i_1 + 1] [i_0 - 3]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_18)) ? (var_8) : (833837818945271995LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_3])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            arr_19 [3U] [i_2] [i_4] = ((/* implicit */unsigned short) (short)-11095);
                            arr_20 [i_0] [i_1] |= ((/* implicit */signed char) var_13);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_0)) : (var_10)))) ? (-1645347646) : (((/* implicit */int) arr_11 [i_0 - 3] [i_1]))));
                        }
                        var_21 &= ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1])))));
                        var_22 = ((/* implicit */unsigned char) (~(5953197327576447560ULL)));
                        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((-5012770910798142165LL) - (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-65)) & (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5 - 2] [i_5 - 2])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (13705137024612561784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))) : (((/* implicit */unsigned long long int) (-(var_0))))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) -1645347644))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-95)) : (-1626766763)))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1022093985)) ? (((/* implicit */int) (unsigned char)133)) : (var_4)))) ? (((((/* implicit */_Bool) 8429168858946106673ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-20538))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5 + 2])))))))));
            var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */int) (unsigned char)10)), (((-1645347620) % (((/* implicit */int) (unsigned short)2047)))))) : (-1645347644)));
            var_29 = ((((((/* implicit */_Bool) (+(-468871495490950736LL)))) ? ((((_Bool)1) ? (((/* implicit */long long int) 1048575U)) : (-1431201105743197308LL))) : (9223372036854775793LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_18 [i_5] [i_6] [i_5] [i_6 - 1] [i_6]) : (var_8)))) ? (var_16) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)15642)))))))));
            var_30 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1108184786)) ? (3237922605464016212LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24461)))))));
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_17)))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_14 [i_5 - 1] [i_7] [i_5] [i_5 - 1]);
                arr_33 [(unsigned short)4] [i_7] [i_7] [i_5] = ((((((/* implicit */_Bool) arr_31 [(signed char)9] [i_7] [i_5 - 2] [i_5])) || (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)32388)), (-9223372036854775771LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_29 [i_5 + 1] [i_7]))))))))) : (((((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)-116))))))));
            }
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_32 = ((/* implicit */int) var_3);
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) -9223372036854775791LL)) ? (((/* implicit */int) (short)9021)) : (1446940442)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) ^ ((~(((/* implicit */int) (unsigned short)58477))))))) : (var_16)));
                var_34 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1))))));
            }
            var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 562949953421311ULL)) ? (arr_22 [i_5] [i_5 - 2]) : (((/* implicit */unsigned long long int) arr_8 [i_5 + 2] [i_5 + 1] [i_5]))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
        {
            arr_38 [i_5] [i_10] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((10643344872487472351ULL) - (((/* implicit */unsigned long long int) var_3))))))) ? ((((~(10017575214763444943ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5 + 2] [9U] [9U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-118)) ? (7285562113550164083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_10]))))) * (((/* implicit */unsigned long long int) (-(1108184790))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_7) % (var_7))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 36011204832919552ULL)) ? (((/* implicit */int) (unsigned short)29631)) : (((/* implicit */int) (unsigned char)30))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */unsigned long long int) -1LL)) : (((((/* implicit */_Bool) 1LL)) ? (8429168858946106676ULL) : (((/* implicit */unsigned long long int) 1521779558U))))))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 1; i_11 < 7; i_11 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)51741)), (8429168858946106673ULL)))) ? (((/* implicit */int) max(((unsigned short)57499), (((/* implicit */unsigned short) (short)-17471))))) : ((+(var_0)))));
                arr_42 [(unsigned short)0] = ((/* implicit */unsigned int) var_5);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)120)))))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9829)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) : ((~(var_8)))));
            arr_46 [i_12] [i_5 + 2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (10017575214763444951ULL) : (((/* implicit */unsigned long long int) -1108184786))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        arr_49 [i_13] [i_13] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25351))));
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26026)) ? (((/* implicit */int) var_11)) : (var_0)))) : (468871495490950735LL)));
        var_41 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((var_7) + (9223372036854775807LL))) >> (((var_8) + (80285725698511582LL)))))) != (arr_48 [i_13] [i_13])));
    }
    var_42 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)14709))));
}
