/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42059
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_1])))));
                    arr_9 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)56))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 - 1] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_13 [i_3] = arr_12 [(signed char)16];
        var_13 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (7875743671151403829LL))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned char) (short)-14461))) ? ((-(((/* implicit */int) (short)16383)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((short)-16392), (((/* implicit */short) var_4)))))));
            var_15 -= ((/* implicit */unsigned char) (+(arr_15 [i_3] [i_3] [i_4])));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_16 -= ((/* implicit */int) (signed char)(-127 - 1));
        var_17 += ((/* implicit */_Bool) max((arr_16 [i_5] [i_5]), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) 0LL)))))));
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_22 [(unsigned short)4] = (_Bool)1;
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_32 [i_6] [i_9] [i_8] [i_9]))));
                            arr_34 [i_7] [i_9] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16383)) ? (((/* implicit */int) (unsigned short)4801)) : (((/* implicit */int) var_10))))), (4294967295U)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [7ULL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(((((/* implicit */_Bool) (short)16403)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                var_20 += ((/* implicit */unsigned int) max((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_19 [i_11]))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_16 [i_11] [(unsigned short)2])))) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) var_8)))))));
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-1))));
                            arr_47 [i_6] [i_6] [i_13] = ((/* implicit */unsigned short) (((_Bool)1) && (((((/* implicit */int) (short)1)) == (((/* implicit */int) (unsigned short)0))))));
                            var_23 = ((/* implicit */unsigned int) arr_15 [i_14] [(_Bool)1] [4ULL]);
                        }
                    } 
                } 
            } 
            arr_48 [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-16383))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0))))), (min((((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (arr_33 [i_6] [16U] [i_7] [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_45 [i_6] [i_7] [i_6] [i_6])) : (((/* implicit */int) var_1)))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 2; i_15 < 16; i_15 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
            {
                arr_54 [i_6] = ((/* implicit */unsigned int) (short)-25874);
                arr_55 [i_6] = ((/* implicit */long long int) (_Bool)1);
            }
            for (short i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
            {
                var_24 -= ((/* implicit */unsigned char) (_Bool)1);
                arr_58 [i_17] [9LL] = ((/* implicit */int) (-(min((arr_44 [i_15] [i_15] [i_17] [i_15]), (((/* implicit */long long int) arr_20 [i_15 - 1]))))));
            }
            for (short i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
            {
                arr_61 [i_6] [i_15] [i_18] = ((/* implicit */unsigned long long int) var_4);
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_12 [i_6]))) + (((/* implicit */int) ((arr_39 [i_6] [(short)9]) && (((/* implicit */_Bool) arr_50 [(_Bool)1])))))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-16383)))))));
            }
            /* vectorizable */
            for (short i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                arr_65 [i_6] [i_15] [i_19] = ((/* implicit */signed char) 479482986U);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62060)) >= ((((_Bool)1) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-1))))));
                            arr_71 [(signed char)2] [i_20] [i_19] [i_15] [i_20] [i_6] = ((/* implicit */_Bool) ((arr_63 [i_15]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_72 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -854409259)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 3815484285U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
                            var_29 -= 479482992U;
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) ((_Bool) var_5))))));
        }
    }
}
