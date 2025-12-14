/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3056
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (((-(((((/* implicit */long long int) ((/* implicit */int) var_9))) / (9223372036854775807LL))))) | (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)64980)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (((((((+(var_4))) + (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) (signed char)-49))))))) + (9223372036854775807LL))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) -816420564)))))))));
        var_11 *= ((/* implicit */signed char) (~((~((~(var_2)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) (~((-((-(((/* implicit */int) arr_1 [i_0]))))))));
            var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -7410421770442206428LL)) | (5540430702754784170ULL)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_14 = ((/* implicit */unsigned long long int) (~((+((+(((/* implicit */int) arr_8 [i_0] [i_0]))))))));
                var_15 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))))))));
                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (((((((~(((/* implicit */int) var_6)))) | (((((/* implicit */int) arr_12 [i_0] [i_2] [i_0])) << (((9222827825218165992ULL) - (9222827825218165972ULL))))))) + (2147483647))) >> ((((-(((/* implicit */int) ((arr_6 [i_3] [i_2]) > (((/* implicit */int) var_7))))))) + (10)))));
            }
            for (short i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_20 [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_10 [i_0] [i_2] [i_4 + 2] [(unsigned char)4])))) - (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))))) >> ((((+((+(var_5))))) - (343085243)))));
                    arr_21 [i_0] [i_4] [i_0] = ((/* implicit */int) (-((-(((((var_4) + (9223372036854775807LL))) << (((arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] [i_5]) - (10038076428683155129ULL)))))))));
                    var_17 = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) var_4))))))));
                    arr_22 [i_0] [i_0] = ((/* implicit */short) (-((-((~(var_5)))))));
                    arr_23 [i_0] [i_0] [i_2] [i_2] [(unsigned char)9] [i_5] = ((/* implicit */_Bool) (-((-((-(((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_18 = ((((((/* implicit */int) arr_15 [i_6] [i_4] [i_0])) & (var_3))) >> (((/* implicit */int) (!((_Bool)1)))));
                    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_8 [4] [i_6])) - (((/* implicit */int) arr_12 [i_2] [i_4 - 1] [i_0]))))));
                }
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    var_20 ^= ((/* implicit */_Bool) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) * (2879375932096838464ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)196))))))));
                    var_21 = ((/* implicit */_Bool) (((~(((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) arr_10 [i_0] [i_2] [i_4 + 1] [i_7])))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 6261284489291319346ULL)))))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_32 [i_0] [i_2] [i_0] [(_Bool)0] [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-((-(var_10)))))) | ((~((-(1406147461325877203ULL)))))));
                    arr_33 [i_0] [i_0] [i_2] [i_4] [i_0] [i_8] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
                    /* LoopSeq 4 */
                    for (int i_9 = 3; i_9 < 10; i_9 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)45))));
                        var_23 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_2] [i_2] [i_4 - 1] [i_2] [i_2] [i_9])))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        arr_41 [i_10] [i_0] [i_4 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8])))))));
                        arr_42 [i_0] [i_2] [i_4] [i_8 - 1] [i_10] = ((/* implicit */signed char) (~((-(arr_14 [i_2] [i_4 + 3] [i_0] [i_10])))));
                        var_24 |= ((/* implicit */long long int) (~((~(-236913492)))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned short) (-(((9223916248491385623ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_26 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_0] [i_2] [i_11])))) < ((-(arr_29 [i_0] [i_2] [i_11])))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_51 [i_4] [i_0] [i_12] = (((~((+(arr_11 [i_4 + 1]))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((2531772358644246299LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))))))))));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) ^ ((+(((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)76)) > (((/* implicit */int) (signed char)77))));
                }
                /* LoopSeq 2 */
                for (int i_13 = 1; i_13 < 7; i_13 += 3) 
                {
                    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1185280372)) < (1406147461325877194ULL)));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (((+(((-236913492) / (((/* implicit */int) var_6)))))) / ((-((+(var_5))))))))));
                    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_13 - 1])) & (var_2))))))));
                    var_32 = ((/* implicit */int) (((-((+(((/* implicit */int) (short)-31284)))))) > (((/* implicit */int) (!((_Bool)1))))));
                    var_33 |= ((/* implicit */unsigned long long int) (((-(-2058209870542075112LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))) != ((-(((/* implicit */int) (unsigned short)48022))))))))));
                }
                for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_14])) && (((/* implicit */_Bool) (unsigned short)63304))))) >> (((/* implicit */int) ((((/* implicit */int) var_7)) != (arr_6 [i_0] [i_2]))))))));
                    var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) == ((~(arr_0 [i_0]))))))));
                }
                var_36 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
            }
            var_37 = ((/* implicit */short) (-((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_2])))))))));
            var_38 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(var_2))) >> ((((~(((/* implicit */int) var_8)))) + (174))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
        {
            arr_60 [i_15] [i_0] [i_0] = ((/* implicit */unsigned char) (+((((+(arr_18 [i_15] [i_15] [i_0] [i_0] [i_0] [i_0]))) / (((14748161724497364235ULL) * (((/* implicit */unsigned long long int) -1873875659))))))));
            arr_61 [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6))))))) | ((-(((/* implicit */int) (_Bool)1))))));
            arr_62 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 2040263049))))));
            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) ((1596582456) >= (((/* implicit */int) (unsigned char)38))))) & (-2040263021)));
        }
    }
    var_40 |= ((/* implicit */unsigned char) (~((((((-(582557105))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
}
