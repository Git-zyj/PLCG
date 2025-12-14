/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223413
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min((var_3), (var_18))))) || (((/* implicit */_Bool) (short)12355))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_13)) | (((/* implicit */int) (short)14))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [(short)6])) && (((/* implicit */_Bool) (short)-15)))))));
                        var_22 ^= ((/* implicit */int) ((unsigned short) var_4));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            arr_11 [i_4] [i_4] = ((/* implicit */unsigned char) arr_4 [i_0]);
            arr_12 [i_4] [i_0] [i_4] = ((/* implicit */signed char) 15651570101772510446ULL);
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_17 [i_0] [i_4] [i_0] [(short)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_12)))))));
                        arr_18 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */short) var_2);
                        var_23 = (-(var_9));
                        arr_19 [i_4] = ((/* implicit */int) 676128504008438536ULL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        var_25 = ((/* implicit */_Bool) ((int) 4072754935U));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) arr_8 [i_0] [i_7] [i_0] [12ULL]))))));
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 576460751229681664LL))));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 16; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_10)), (max((arr_24 [i_0] [11LL] [i_0] [i_0]), (((/* implicit */long long int) (short)-27179)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_10] [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)16]))) : (((4294967278U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((12854904828921520584ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4080))))));
                    arr_37 [i_10 + 2] [i_10 + 1] [i_0] [i_11] |= ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) min((var_8), (0)))) || (((/* implicit */_Bool) max(((short)32168), (((/* implicit */short) (unsigned char)84)))))))), (max(((short)23), ((short)6)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 3; i_12 < 15; i_12 += 4) 
        {
            for (short i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                {
                    arr_43 [i_0] [i_0] [i_13] [i_12] = ((/* implicit */int) min(((short)32166), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (245760U))))));
                    arr_44 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) ((short) var_6));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_4))));
                    var_31 ^= (short)14;
                    var_32 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) 6861158337778323314LL))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [(short)6]))) > ((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) (short)32166)))) : (max((1924376587), (((/* implicit */int) (signed char)1))))))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                {
                    arr_51 [i_0] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0]))) < ((+(0U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            {
                                arr_59 [i_17] [i_16 + 1] [i_14] [i_14] [i_14] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_12)), ((~(18446744073709551615ULL)))));
                                var_34 -= ((_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (12854904828921520584ULL))), (((4294967290U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)192)))))));
                                var_35 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)5955))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
