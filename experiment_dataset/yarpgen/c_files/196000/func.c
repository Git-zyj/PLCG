/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196000
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (~(arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 1534330295285305709ULL)))));
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))))) != ((~(arr_2 [i_1])))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4004634839U)) && (((/* implicit */_Bool) 6581369487511051697LL)))) && (((arr_10 [i_2] [i_1] [i_0]) || (((/* implicit */_Bool) (signed char)-114))))));
                arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_2]));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-1389244439925971345LL)));
                    var_24 = ((/* implicit */unsigned char) arr_8 [i_0] [3LL]);
                }
                arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
            }
        }
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4] [i_4])) + (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_4] [i_4])), (arr_15 [i_4]))))));
        arr_17 [i_4] = arr_16 [i_4] [i_4];
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))) + (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (18266906401574989385ULL)))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_27 = (unsigned char)28;
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned short)11))) / (((/* implicit */int) arr_18 [i_5] [i_5]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (unsigned char)253))));
            arr_24 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_6 + 2] [i_6] [i_6 + 2])) == (((/* implicit */int) arr_9 [i_5] [i_6 - 1] [i_6 - 3])))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_30 &= ((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5]);
            var_31 = ((unsigned int) ((((/* implicit */_Bool) 2295483215253512260LL)) ? (((/* implicit */int) (unsigned short)43585)) : (((/* implicit */int) arr_7 [i_7] [i_5]))));
            var_32 = ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned short)11)));
        }
    }
    var_33 ^= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) (short)13380)) / (((/* implicit */int) (unsigned char)33))))), (((((/* implicit */long long int) var_1)) - (-6581369487511051681LL))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22982)))));
    var_34 = var_14;
    /* LoopSeq 3 */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_35 = ((/* implicit */unsigned short) 1389244439925971344LL);
        var_36 = ((((((/* implicit */int) arr_9 [i_8] [i_8] [i_8])) - (((/* implicit */int) arr_9 [i_8] [i_8] [i_8])))) >= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8])) > (((/* implicit */int) arr_9 [i_8] [i_8] [i_8]))))));
        var_37 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_8] [(unsigned char)11] [i_8]))));
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) ((min((var_1), (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9])))) / (((/* implicit */int) ((_Bool) max(((signed char)1), (((/* implicit */signed char) arr_5 [13U] [13U] [(signed char)5]))))))));
        var_38 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_3 [(signed char)20])) : (((/* implicit */int) arr_16 [i_9] [i_9])))) != (((/* implicit */int) ((arr_10 [i_9] [i_9] [i_9]) || (((/* implicit */_Bool) var_12)))))))) < (((((/* implicit */int) arr_13 [i_9] [i_9] [i_9])) + (((/* implicit */int) (unsigned short)64654))))));
    }
    for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        var_39 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)251)) + (((/* implicit */int) arr_9 [i_10] [i_10] [(signed char)12])))))) > (((/* implicit */int) ((_Bool) arr_7 [i_10 + 1] [i_10 - 2])))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_40 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)214)) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (var_10)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) (unsigned char)199);
                    var_42 |= ((/* implicit */unsigned char) ((arr_36 [i_13 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13] [7LL] [i_13 + 2])))));
                    arr_45 [i_10 + 1] [i_12] [i_12] [i_10 + 1] [i_10] = ((/* implicit */_Bool) (unsigned char)73);
                }
                arr_46 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_43 [i_10 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12] [i_12] [i_12])))))) - (arr_2 [i_10 - 1])));
            }
        }
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) min((arr_35 [i_10]), ((_Bool)1))))) == (((((/* implicit */int) (signed char)22)) & ((~(((/* implicit */int) (unsigned char)2)))))))))));
        var_44 = ((/* implicit */unsigned short) min((((arr_31 [(unsigned char)8]) - (((2905637886U) >> (((var_1) - (434175734))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_44 [i_10] [i_10])))))));
        arr_47 [6U] = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) 217825734U)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_35 [i_10 - 2])))) == (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_15 [i_10]))))))));
    }
}
