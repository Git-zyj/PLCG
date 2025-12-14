/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247182
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
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_19 *= ((/* implicit */signed char) arr_3 [i_1] [i_0 + 1] [1ULL]);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    arr_12 [i_2] = ((/* implicit */_Bool) (signed char)-39);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_11 [i_0]))));
                    var_21 *= ((/* implicit */unsigned int) (_Bool)0);
                    arr_13 [i_2] [i_2] = 5180643813971234272ULL;
                }
                var_22 *= ((/* implicit */unsigned int) ((short) arr_0 [i_2] [i_1]));
            }
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_18 [i_0 - 1] [i_1] [i_4] [i_1] = ((/* implicit */short) var_16);
                arr_19 [i_0 - 2] [15ULL] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (arr_11 [i_0])));
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) var_0);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_15);
                            arr_27 [i_4] [i_6] [8LL] = ((/* implicit */unsigned int) ((short) (_Bool)1));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0])) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 - 2])))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2290480681453098030ULL)) ? (9582739581252096932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_5))));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) > (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1])))))));
                var_28 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16156263392256453586ULL)));
            }
            var_29 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) <= (16156263392256453563ULL));
            arr_30 [i_0] = ((/* implicit */short) var_11);
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                for (unsigned int i_9 = 4; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_40 [i_8] [i_10] = (-(arr_1 [i_1] [(unsigned short)17]));
                            var_30 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_16))) : (6ULL));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) var_11);
                    arr_46 [i_0] [15] [4ULL] [i_12] = ((/* implicit */_Bool) ((signed char) var_8));
                    arr_47 [i_0] [12LL] [i_12 + 1] = ((/* implicit */unsigned long long int) arr_41 [i_0 + 1] [i_12 + 3] [i_12 + 2]);
                    arr_48 [i_0] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_12 - 1] [i_12] [i_12 - 2] [i_12 + 3]))));
                    var_32 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63488)) / (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        arr_53 [i_13] [i_13] = ((/* implicit */long long int) arr_36 [i_13]);
        var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 9582739581252096932ULL)) ? (((/* implicit */int) (short)15805)) : (((/* implicit */int) (signed char)-63))));
        arr_54 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_52 [i_13] [i_13])));
    }
}
