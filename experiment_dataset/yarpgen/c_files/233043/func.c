/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233043
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
    var_11 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_2)))) || ((!(((/* implicit */_Bool) var_3)))))) && (((/* implicit */_Bool) (+((~(0U))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) (!((_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) / ((-((+(((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_1] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25407)))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_18 [i_0] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_6)))))))));
                        arr_19 [i_5] [i_5] [i_4] [i_5] [(_Bool)0] |= ((/* implicit */int) (((+(((/* implicit */int) (short)19561)))) <= ((-(((((/* implicit */int) arr_16 [i_0])) << (((/* implicit */int) arr_15 [i_0] [i_3] [i_4]))))))));
                    }
                } 
            } 
            arr_20 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) ((527087348U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-19563)))))) << (((((((/* implicit */int) (signed char)0)) - (43170317))) + (43170324)))))));
            arr_21 [i_3] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!((_Bool)1)))))) - ((+((~(((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_24 [i_0] [i_3] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)29))))) || ((!(((/* implicit */_Bool) (short)19561))))))))));
                arr_25 [i_3] [i_6] [i_6] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_10)))))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_29 [13U] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (short)-5951))));
                arr_30 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */int) ((((arr_10 [i_7] [i_3] [i_0]) >> (((arr_26 [(signed char)3] [i_3] [(signed char)3] [i_3]) + (1802414131))))) >> ((((-(((/* implicit */int) arr_23 [i_0] [i_3] [i_3] [i_7])))) + (19)))));
                arr_31 [i_3] [i_3] [i_7] = ((/* implicit */short) (!(((16U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_3] [i_0] [i_3] [i_0])))))));
            }
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                arr_34 [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(2226855665U)))) && (((/* implicit */_Bool) (~((+(var_2))))))));
                arr_35 [i_0] [(short)4] [i_3] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned short)384)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > ((-(((/* implicit */int) arr_27 [(unsigned short)20])))))))));
            }
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            arr_39 [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (+((~(-933293137)))));
            arr_40 [i_9] [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-13933))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 19; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 21; i_12 += 3) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_52 [(short)7] [i_10] [4U] [i_11] [i_13 - 1] = ((/* implicit */short) (-((~(((/* implicit */int) (short)-16866))))));
                            arr_53 [(short)14] [i_13 - 1] [i_12 - 1] [i_11] [i_11 - 1] [i_10] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_6 [i_11] [i_10])) & (((/* implicit */int) (_Bool)0))))));
                            arr_54 [i_13] [i_12 - 2] [(short)12] [i_11] [i_11] [i_10] [(unsigned char)3] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                arr_55 [i_0] [i_10] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)29006))))) / ((-(var_6)))));
            }
            arr_56 [i_0] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)18661)))))));
        }
        for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_15 = 1; i_15 < 20; i_15 += 1) 
            {
                for (short i_16 = 2; i_16 < 20; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        {
                            arr_68 [(_Bool)1] [i_17] [i_15 - 1] [i_17] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_43 [(short)18])))))))));
                            arr_69 [i_0] [i_0] [16] [i_16] [i_0] = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_6 [i_0] [i_15]))))))));
                            arr_70 [i_17] [i_17] [i_15] [i_17] [(unsigned short)4] = ((/* implicit */short) (+((~(((((/* implicit */int) var_9)) % (((/* implicit */int) var_9))))))));
                            arr_71 [i_15 + 1] [i_16] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((2068111630U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)223)) || (((/* implicit */_Bool) var_5))))))))) && (((/* implicit */_Bool) (((~(2226855669U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_10))))))))));
                            arr_72 [i_17] [i_17] = ((/* implicit */short) (-((+(((/* implicit */int) (short)-22004))))));
                        }
                    } 
                } 
            } 
            arr_73 [i_14 - 1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((779415840U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
        }
    }
}
