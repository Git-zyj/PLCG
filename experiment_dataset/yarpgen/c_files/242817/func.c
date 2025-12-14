/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242817
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
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned char) 4294967289U)), (((/* implicit */unsigned char) ((signed char) arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((8157466600575233266LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 4797814725464028838LL)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned short)16320)))))))) : ((+(((((/* implicit */_Bool) (signed char)-1)) ? (13092681849893968271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47423)))))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [(signed char)3] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) arr_7 [i_0] [(signed char)1] [i_2 - 1] [i_0])), (arr_8 [i_2] [i_2 + 2] [i_2 + 2] [i_0])));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)30));
                var_17 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [7ULL] [7ULL]));
                var_18 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)-943)))), (((/* implicit */int) (short)-6951))));
                var_19 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_8 [i_0] [i_1] [(short)5] [i_2 + 2])) | (((/* implicit */int) arr_7 [i_0] [(signed char)11] [i_2 + 1] [i_0]))))));
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)48))));
                        var_20 &= ((/* implicit */short) ((signed char) max((10253602399113121753ULL), (((/* implicit */unsigned long long int) -7469391638892112730LL)))));
                    }
                } 
            } 
            arr_20 [i_0] = var_13;
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_16 [7ULL] [7ULL] [7ULL] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_22 -= ((/* implicit */signed char) var_8);
                            var_23 = ((unsigned short) arr_15 [i_8] [i_7]);
                            var_24 = ((/* implicit */unsigned long long int) var_11);
                            arr_29 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                        }
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)242)))));
                        arr_30 [i_7] [i_3] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (((((4164209865880770680LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            arr_33 [i_0] [i_0] = ((/* implicit */signed char) arr_28 [i_9 - 1] [i_9 - 1] [(signed char)5] [i_9 - 1] [(signed char)5] [(signed char)5]);
            /* LoopNest 3 */
            for (long long int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 11; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_42 [i_0] [i_0] [i_10 - 2] [(unsigned short)7] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-27488)) < (((/* implicit */int) var_2))));
                            var_26 |= ((/* implicit */long long int) ((unsigned long long int) (signed char)87));
                            var_27 = ((/* implicit */short) ((unsigned char) 7469391638892112732LL));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) (+(2608999114U)));
        }
        for (signed char i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            arr_45 [i_0] = ((/* implicit */signed char) (((~(((unsigned int) arr_11 [i_13] [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_17 [i_0] [(unsigned char)6] [i_0] [i_13] [i_13 - 1] [i_0])), (arr_38 [i_0] [i_13 - 2])))))));
            arr_46 [(unsigned short)2] [i_13] [i_13] |= ((signed char) -2835693111162362410LL);
        }
    }
    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        var_29 = ((/* implicit */long long int) (signed char)40);
        /* LoopSeq 1 */
        for (unsigned int i_15 = 2; i_15 < 22; i_15 += 1) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+((+(((/* implicit */int) ((580078019U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))))))))))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (signed char)-119))))))));
            arr_52 [i_15 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) max((((/* implicit */unsigned short) arr_48 [i_14] [i_14])), (arr_47 [i_14] [i_14])))) / ((+(((/* implicit */int) (short)-8588)))))) : (((/* implicit */int) ((short) (signed char)123)))));
        }
        var_32 = ((/* implicit */signed char) max((((((((/* implicit */int) arr_50 [i_14] [i_14])) & (((/* implicit */int) arr_50 [i_14] [i_14])))) | ((~(((/* implicit */int) arr_47 [(unsigned char)23] [i_14])))))), (((((/* implicit */int) (signed char)1)) | (((/* implicit */int) (_Bool)0))))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ ((+(((/* implicit */int) (unsigned short)65524))))));
    }
    for (short i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_17 = 2; i_17 < 8; i_17 += 3) 
        {
            var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_48 [i_17 + 1] [i_17]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)115)) & (((/* implicit */int) (signed char)(-127 - 1)))))));
            arr_59 [i_17] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_16] [i_17]))))) || (((/* implicit */_Bool) ((long long int) arr_26 [i_16] [i_16] [i_16] [i_16] [i_17])))))) * (((((/* implicit */int) arr_58 [i_17 + 3] [i_17 + 2])) & (((((/* implicit */int) arr_15 [i_16] [i_17])) | (((/* implicit */int) arr_13 [i_16] [i_16] [i_17]))))))));
            arr_60 [i_17] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_51 [i_16] [i_17 + 1] [i_17 + 1]))), (((((((/* implicit */int) arr_8 [i_17 + 1] [i_17] [i_16] [i_17])) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_17 - 2] [i_17] [i_16] [i_16])) + (78))) - (14)))))));
            arr_61 [(short)8] [i_17] [(short)7] = ((/* implicit */unsigned long long int) var_9);
        }
        arr_62 [4ULL] = ((/* implicit */short) ((((unsigned int) max((((/* implicit */unsigned int) (signed char)14)), (2774180901U)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)-7), (var_0)))) & (((((/* implicit */int) (short)16077)) << (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (long long int i_18 = 2; i_18 < 9; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                {
                    arr_69 [i_16] [i_16] [(signed char)2] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1520786395U)) ? (((/* implicit */int) arr_50 [i_16] [i_18 + 1])) : (((/* implicit */int) (short)-32754))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32620)))) : (((((/* implicit */_Bool) ((signed char) arr_53 [i_16]))) ? (((((/* implicit */_Bool) var_5)) ? (arr_32 [i_18 - 2] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)8] [i_18]))))) : (((/* implicit */unsigned long long int) (+(580078012U))))))));
                    var_35 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) 7629053989852357024LL)) + (8582332368575388898ULL)));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1520786416U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [4ULL]))));
        arr_70 [i_16] = ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (short)-27249)) : (((/* implicit */int) (short)17637)))) / (((/* implicit */int) (unsigned short)61686))))), (min((((/* implicit */long long int) (signed char)120)), (-7629053989852357024LL)))));
    }
}
