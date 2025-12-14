/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26914
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [(signed char)0])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (max((((/* implicit */long long int) (short)32759)), (arr_1 [i_0])))))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) != ((((~(arr_1 [i_0]))) + (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [8U] [8U])) >= (arr_0 [i_0])))), ((-(arr_1 [1ULL])))))) || (arr_3 [i_0] [i_0] [12U])));
            var_19 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_5 [i_1 - 2] [i_1 + 1])), (arr_1 [i_0]))) / (((/* implicit */long long int) arr_0 [i_0]))));
            var_20 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min(((short)-27110), ((short)-1)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-32759)))))));
            arr_7 [i_0] [8U] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-32767)), (11ULL)));
        }
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_21 = max((((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_0] [i_2 - 1] [i_4] [i_0])))), (((unsigned long long int) 2746068620661785228ULL)));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_0])) ? (max((((unsigned int) arr_11 [(unsigned short)9])), (((/* implicit */unsigned int) arr_5 [i_5] [i_5])))) : (((/* implicit */unsigned int) ((arr_8 [i_0] [(unsigned char)0]) ? (((/* implicit */int) arr_8 [i_0] [10])) : (((/* implicit */int) arr_8 [i_0] [0LL])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_21 [i_7]))) & (((((/* implicit */int) arr_3 [i_7] [i_6] [i_0])) << (((/* implicit */int) arr_11 [i_2]))))))) ? (((/* implicit */int) (unsigned short)57916)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)-32760))))));
                            arr_26 [i_0] = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
            } 
        }
        var_24 += ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)7619)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_14)) % (var_0)))) ? (((/* implicit */int) arr_21 [i_0])) : ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))))));
        var_25 -= ((/* implicit */unsigned char) max(((short)32767), (((/* implicit */short) (signed char)96))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 12; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                {
                    var_26 &= ((/* implicit */signed char) max((max((((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_32 [(unsigned char)0] [(_Bool)0])))), (((/* implicit */int) arr_18 [i_10 - 2] [i_10 - 2] [i_9])))), (((/* implicit */int) var_7))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57917))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((5406084191295188243LL), (((/* implicit */long long int) arr_18 [i_9] [5ULL] [i_11]))))), (min((arr_23 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_32 [i_9] [i_9])))))))));
                    var_28 -= arr_15 [(_Bool)1] [i_11] [i_10] [8U] [i_10 + 1] [8U] [8U];
                }
            } 
        } 
        var_29 += ((/* implicit */int) arr_37 [i_9] [i_9] [i_9]);
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        arr_48 [i_9] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((min((arr_27 [i_9] [i_9]), (arr_27 [i_9] [i_9]))) + (((/* implicit */int) min((((/* implicit */short) arr_43 [i_14] [i_13] [i_12] [i_9])), (((short) arr_43 [i_9] [i_9] [i_9] [i_9])))))));
                        var_30 ^= ((/* implicit */unsigned long long int) ((_Bool) (short)-5887));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((arr_12 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12]), (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_14])))))));
                        var_32 *= ((/* implicit */short) min((((unsigned long long int) 11ULL)), (((/* implicit */unsigned long long int) max(((short)32767), (arr_30 [i_13]))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_33 *= ((/* implicit */unsigned long long int) arr_29 [8ULL]);
        var_34 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) max((arr_41 [(unsigned short)8] [i_15]), (((/* implicit */int) var_15))))), (((unsigned int) (short)32767)))));
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                for (short i_18 = 3; i_18 < 11; i_18 += 3) 
                {
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), (((((2344931312U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_16] [i_18 - 3] [i_16]))))) >= ((~(arr_16 [(unsigned char)0] [(unsigned char)0] [i_18 - 1] [i_16] [(unsigned char)0])))))));
                        var_36 += ((/* implicit */unsigned int) (~(arr_27 [(unsigned char)12] [(unsigned char)12])));
                        arr_60 [i_15] [i_16] [12U] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_33 [i_15] [i_16] [i_15])) != (((/* implicit */int) arr_56 [i_15] [i_16] [i_17] [i_18] [i_16] [i_17]))))) & (((((/* implicit */_Bool) arr_56 [i_18 + 1] [i_18] [i_17] [i_15] [i_15] [i_15])) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (short)-5887))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_19 = 3; i_19 < 16; i_19 += 3) 
    {
        for (unsigned short i_20 = 4; i_20 < 17; i_20 += 3) 
        {
            {
                arr_66 [10U] [i_20] |= min((((/* implicit */unsigned int) arr_64 [i_19 - 2] [i_19 + 1])), (arr_65 [i_20 + 1] [6U] [i_20 + 1]));
                arr_67 [(unsigned char)12] [(unsigned char)0] [(unsigned char)12] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) >= (arr_63 [i_20])));
                var_37 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_19 + 1] [i_19 - 2]))) & (arr_63 [i_19 - 2]))));
            }
        } 
    } 
}
