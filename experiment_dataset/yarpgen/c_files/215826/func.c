/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215826
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_11))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65522), ((unsigned short)30707))))) : (((((/* implicit */_Bool) (unsigned short)43264)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) : (var_8)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65533);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_2 - 2] = ((/* implicit */unsigned short) ((unsigned int) ((4294967295U) & ((((_Bool)1) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54346))))))));
                        arr_15 [6U] [6U] [10U] = ((/* implicit */unsigned char) (_Bool)0);
                        var_15 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)65522)))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            arr_21 [i_4] [i_5 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) 16250679178794613079ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1142))) : (4294967295U))) - (1130U)))));
            var_16 = ((/* implicit */unsigned short) 16250679178794613079ULL);
            arr_22 [(unsigned char)11] [i_5] [i_5 - 1] &= ((/* implicit */unsigned char) ((unsigned short) (unsigned char)0));
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
            {
                for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_28 [6U] [(_Bool)0] [6U] [i_7 + 2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)115))));
                        var_17 = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) ((short) (_Bool)1));
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_19 |= ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)240)) : (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            arr_39 [10U] [i_8] [10U] [1U] [i_11] [i_8] [i_8] = ((/* implicit */unsigned int) (~(((unsigned long long int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) var_9)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) 1838026109U)))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_43 [i_4] [i_8] [i_12 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_4)))) ? (((var_4) << (((3840668836U) - (3840668821U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21981)))));
                var_22 = ((/* implicit */_Bool) (short)-7089);
            }
            var_23 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (3327103690U)))));
            var_24 = ((/* implicit */unsigned int) ((unsigned char) var_8));
            var_25 *= ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1075843489U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58309))))))) : (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        }
        arr_44 [i_4] &= ((/* implicit */unsigned int) ((unsigned short) var_2));
    }
    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
    {
        var_26 *= min((((/* implicit */unsigned int) var_2)), (((((unsigned int) var_4)) * (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)39549)) : (((/* implicit */int) (unsigned short)65535))))))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 2; i_14 < 10; i_14 += 4) 
        {
            for (unsigned int i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                {
                    arr_53 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (unsigned short)0))) << (min((var_4), (((/* implicit */unsigned int) ((565791601U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                    var_27 -= ((/* implicit */unsigned short) (+(max((((unsigned int) (unsigned char)56)), (((/* implicit */unsigned int) (unsigned char)240))))));
                    var_28 = ((/* implicit */unsigned char) ((unsigned int) 1450093826U));
                    var_29 ^= ((/* implicit */unsigned int) ((unsigned long long int) min((min(((unsigned short)48984), ((unsigned short)39536))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))))));
                    var_30 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)-7089)), (3U)))));
                }
            } 
        } 
    }
}
