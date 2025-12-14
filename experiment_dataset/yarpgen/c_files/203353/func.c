/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203353
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)46225))));
        var_19 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((var_12) | (((/* implicit */unsigned long long int) 113575720)))) : (((((/* implicit */unsigned long long int) var_13)) / (7238674144194362617ULL))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) / (min((min((((/* implicit */long long int) (short)6144)), (arr_3 [(unsigned char)3]))), (((/* implicit */long long int) 113575694))))));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_3 [(signed char)3]))));
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_13 [i_1 + 2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 14415670988514581306ULL)))))) / (((14415670988514581297ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_3 [i_1]))))))));
                    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_0)) == (min((5244720311089878274ULL), (((/* implicit */unsigned long long int) 74218959))))));
                    arr_14 [i_1] [i_2] = ((/* implicit */unsigned short) var_11);
                    arr_15 [i_3] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */short) ((var_10) < (-74218988)))))))) < (16158716702565621116ULL)));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) var_10)), ((-(4031073085194970309ULL)))))));
        arr_17 [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) arr_1 [1])), (arr_5 [i_1 + 2])))))) >= ((+(var_12)))));
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
    {
        var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_4 + 3])) : (((/* implicit */int) arr_19 [i_4 + 2])))) % (((arr_19 [i_4 + 2]) ? (((/* implicit */int) arr_18 [i_4 + 1])) : (((/* implicit */int) arr_19 [i_4 - 3]))))));
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) (!(((((/* implicit */_Bool) (unsigned char)141)) && (((/* implicit */_Bool) (unsigned short)48437)))))));
    }
    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) min((arr_2 [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) - (var_11)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_16)) < (arr_3 [i_5])))) : (((/* implicit */int) ((signed char) var_2))))))));
        var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 2]))) <= (max((((/* implicit */unsigned int) (unsigned char)107)), (0U)))))), (max((-74218959), (-74218961)))));
        var_27 = ((/* implicit */unsigned long long int) arr_20 [i_5] [i_5]);
        var_28 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_5])), (arr_3 [4])))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_5])), (4031073085194970329ULL))) : (14415670988514581306ULL))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */signed char) (unsigned char)197);
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_23 [i_6] [i_7]))));
            var_30 &= ((/* implicit */long long int) arr_22 [i_6] [i_7]);
        }
        var_31 = ((/* implicit */long long int) var_15);
    }
    for (int i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_32 = ((74218959) > (((/* implicit */int) (unsigned short)5547)));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 2) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned char) max((var_10), (((((/* implicit */_Bool) arr_36 [i_10 - 1])) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) arr_36 [i_10 + 1]))))));
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)22325), (((/* implicit */unsigned short) (unsigned char)121)))))) < (((unsigned long long int) var_9)))))) <= (min((((/* implicit */long long int) var_11)), (arr_34 [i_8 + 2] [i_10 - 1])))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(max((74218942), (var_13)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3105688640746569903LL)) ? (2778005337367018061LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11])))))), (arr_25 [i_11] [i_11])))));
        var_36 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_40 [i_11]))))));
    }
    var_37 = ((/* implicit */long long int) var_5);
}
