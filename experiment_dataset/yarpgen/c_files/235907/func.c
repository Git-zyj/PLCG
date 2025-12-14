/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235907
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)255)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-18490)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((unsigned short) arr_3 [i_0]))) / (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (_Bool)1))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [(_Bool)1] [i_3 - 2] [i_2]))))) * (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_3 + 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (short)-5877)))));
        arr_12 [13U] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)6944)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-66)) & (((/* implicit */int) var_7)))))))));
                    var_16 = ((/* implicit */short) (-((+((-(((/* implicit */int) (unsigned short)18))))))));
                    arr_18 [i_4] [i_5] [i_4] [i_4] |= (+((~(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_5] [i_5 + 2] [i_5] [i_6])) || (((/* implicit */_Bool) arr_17 [i_6]))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((long long int) (unsigned short)54682));
        arr_19 [3U] [(unsigned char)12] |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_6)))), (max((((((/* implicit */int) arr_2 [i_4] [i_4])) ^ (((/* implicit */int) var_1)))), (((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)4))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_29 [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 3])) || (((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)255))));
            var_20 += ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_14 [i_10] [i_10] [i_10 + 1])));
        }
        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
        {
            var_21 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)5473), (((/* implicit */short) var_10)))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((min((14ULL), (((/* implicit */unsigned long long int) (unsigned short)62357)))) != (((/* implicit */unsigned long long int) (~(var_3)))))))));
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            var_23 += (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65281)) ^ (((/* implicit */int) (unsigned short)65286))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [10] [i_12]))) / (var_9))))))));
            arr_36 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(536870912U))))));
            var_24 ^= ((unsigned short) (+(((int) var_5))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65270))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21217)))))));
                        arr_42 [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((arr_15 [i_14] [(_Bool)1] [i_7]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14])))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        var_26 = ((/* implicit */short) (+(((/* implicit */int) (signed char)18))));
        var_27 |= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_15] [i_15] [i_15] [i_15])))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (signed char)66)) / (2107361546))))))))));
        arr_46 [i_15] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_3 [i_15])) >> (((var_2) - (2305600898653814020ULL))))));
        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_40 [i_15] [i_15])) || (((/* implicit */_Bool) arr_10 [i_15] [i_15])))))))));
    }
    var_30 += ((/* implicit */unsigned short) (~((~(((unsigned long long int) (_Bool)1))))));
}
