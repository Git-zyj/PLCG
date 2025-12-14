/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24157
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 2992729402U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))));
        arr_3 [i_0] = 7323638847644696167ULL;
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) ((3148693237U) < (2992729402U))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */short) (~((+(var_0)))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) 231296464U))));
            var_12 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */signed char) (~(2251799809490944ULL)));
                            arr_17 [i_1] [i_2 + 2] [i_3 - 1] [i_2 + 2] [i_2 + 2] = ((/* implicit */short) var_6);
                            arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18444492273900060671ULL));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) var_5);
                            var_14 ^= ((/* implicit */unsigned long long int) (short)0);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)255));
                arr_27 [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((549755805696LL) + (((/* implicit */long long int) ((/* implicit */int) (short)27158)))))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_1]))));
                var_15 = ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) (-(-58710496)));
                var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_6])) && (((/* implicit */_Bool) arr_13 [i_1] [i_6] [i_6] [i_6] [i_6] [i_6])))));
            }
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                var_18 += ((/* implicit */int) ((((/* implicit */unsigned long long int) 279275953455104LL)) <= (arr_23 [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((arr_34 [i_1] [i_12 - 1] [i_1] [i_12 + 1]) / (789425350369870863ULL)));
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_1] [i_6]))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (short)1024))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        {
                            arr_46 [i_14] [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_21 [i_1] [i_10] [i_13])));
                            arr_47 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
    {
        var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2992729402U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_5 [i_15])))))));
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_24 += ((/* implicit */_Bool) ((long long int) (unsigned char)245));
    }
}
