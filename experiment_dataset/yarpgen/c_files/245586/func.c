/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245586
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_4 [(unsigned char)10] [i_0] |= ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) var_6)))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(signed char)6])), (var_6))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((var_9), (((/* implicit */signed char) arr_1 [i_0])))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned short)13] = max(((unsigned short)31653), (((/* implicit */unsigned short) (short)31823)));
                            arr_14 [i_0] [i_0] [i_2 - 1] [(signed char)4] [i_4] [i_4] [i_1 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1])))))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */signed char) arr_11 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1]);
        }
    }
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_1 [i_5]);
        var_15 = ((/* implicit */signed char) max(((+(((/* implicit */int) (short)31823)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (max((((/* implicit */short) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])), (var_1))))))));
        var_16 = ((/* implicit */long long int) var_8);
        var_17 = ((/* implicit */signed char) ((unsigned int) ((min((((/* implicit */long long int) (short)31823)), (arr_12 [(unsigned short)3] [(unsigned short)8] [(unsigned short)8]))) - (((/* implicit */long long int) ((((/* implicit */int) (signed char)-91)) + (((/* implicit */int) arr_10 [i_5]))))))));
    }
    /* LoopSeq 3 */
    for (signed char i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */signed char) max((max((arr_19 [i_6] [i_6 + 1]), (arr_19 [i_6 - 1] [i_6 + 1]))), (arr_19 [6U] [i_6 + 1])));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
        {
            arr_25 [i_6] &= ((/* implicit */long long int) ((signed char) (~(var_7))));
            arr_26 [i_6] [i_7] = ((/* implicit */short) (+(max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
            arr_27 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) arr_21 [i_6] [i_7]);
            arr_28 [i_6 - 1] = ((/* implicit */unsigned short) max((((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)92)))), ((_Bool)1)))), ((+(((/* implicit */int) (unsigned char)239))))));
            arr_29 [i_6] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1])) | (((/* implicit */int) arr_19 [i_6] [i_6 + 1]))))), (max((arr_24 [i_6 + 1]), (arr_24 [i_6 + 1])))));
        }
        for (unsigned short i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
        {
            arr_33 [i_6] [i_8] = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775797LL)))));
            arr_34 [i_6] [i_8] = arr_23 [i_6] [(unsigned char)1];
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 2; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65505))));
                        var_19 = ((/* implicit */long long int) min((((((/* implicit */int) arr_40 [i_10 - 1] [i_10 - 1] [i_10] [i_11])) & (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_40 [i_10 - 1] [(unsigned short)2] [(unsigned short)2] [i_11 - 1]))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31653)) ? ((+(arr_30 [i_9 + 1] [i_9 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_40 [i_6] [i_9] [(unsigned char)3] [i_9]), (((/* implicit */unsigned short) arr_38 [(unsigned short)6] [(unsigned short)6]))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (signed char i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_32 [i_14 - 1] [i_13 - 1])) - (((/* implicit */int) (unsigned char)163)))), (((/* implicit */int) (unsigned short)65502)))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((long long int) arr_46 [i_6] [i_12] [i_13])))));
                        arr_52 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)239))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned char) (signed char)105);
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) | (max((((/* implicit */long long int) arr_23 [i_15 + 1] [i_16])), (var_3)))));
        }
        arr_59 [(signed char)12] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)));
    }
    for (signed char i_17 = 1; i_17 < 19; i_17 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_58 [(short)2] [i_17 - 1] [(short)2]), (arr_58 [(_Bool)1] [i_17 - 1] [(_Bool)1])))))))));
        /* LoopNest 3 */
        for (signed char i_18 = 3; i_18 < 18; i_18 += 3) 
        {
            for (short i_19 = 2; i_19 < 19; i_19 += 4) 
            {
                for (unsigned short i_20 = 3; i_20 < 18; i_20 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)6111))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            arr_73 [i_17] [i_17 - 1] [i_17 + 1] [i_17] [(unsigned char)13] [19U] = ((/* implicit */_Bool) ((signed char) arr_57 [i_21]));
                            var_27 = var_10;
                        }
                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 19; i_22 += 3) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((short) arr_35 [i_20 - 2] [i_19 + 1] [i_17 - 1]));
                            arr_76 [i_17] [i_18] [i_19] [i_17] [i_22] [i_17] [i_18 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_51 [i_19] [(unsigned short)6] [i_19] [i_22])) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_17] [14U]))) > (3196959117025468316LL))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                            arr_77 [i_22] [i_18] [(signed char)12] [(signed char)10] [i_19] [(signed char)10] [i_22 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)92))));
                        }
                    }
                } 
            } 
        } 
    }
    var_30 &= ((/* implicit */unsigned short) var_4);
}
