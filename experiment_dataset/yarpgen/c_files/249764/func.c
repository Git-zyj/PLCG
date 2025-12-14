/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249764
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((signed char) (+(arr_5 [i_1 - 1] [i_1 + 1]))));
                arr_7 [i_0] [i_1 - 1] &= ((/* implicit */signed char) 7418171104195759846LL);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1 + 1] [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)65280)), (((((/* implicit */int) (unsigned char)75)) << (((((/* implicit */int) var_0)) - (125))))))) ^ ((~(((/* implicit */int) arr_2 [i_1 + 2]))))));
                    var_15 -= ((/* implicit */long long int) (unsigned char)64);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) ((long long int) var_1));
                    arr_14 [i_0] = ((/* implicit */signed char) -1571858316);
                    var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -1571858316)) && (((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) && (((/* implicit */_Bool) (signed char)89))))) : (((/* implicit */int) ((signed char) var_0))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (signed char i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) 1571858316);
                        var_20 = ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-16384))))) % (((((/* implicit */_Bool) arr_18 [i_4 + 1])) ? (((/* implicit */int) arr_19 [i_4 - 2] [i_4 - 2])) : (arr_24 [i_4 - 2] [i_5] [i_6 + 1]))))), (((/* implicit */int) var_10))));
                        var_21 += ((/* implicit */signed char) arr_4 [i_4]);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (signed char)-90))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_4 - 1] [i_4 - 2]))) ? (((long long int) var_4)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 1])))))));
        var_24 ^= ((/* implicit */long long int) var_0);
        /* LoopSeq 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    {
                        arr_35 [i_4 - 1] [i_4 - 1] [i_9] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_21 [i_9])) ? ((+(-5419131679950132310LL))) : (((/* implicit */long long int) arr_30 [i_4 - 2] [i_4 - 2] [i_4 + 1]))))));
                        var_25 |= ((/* implicit */long long int) min((((/* implicit */int) (signed char)84)), ((~(((/* implicit */int) arr_29 [i_8 - 1] [i_4 + 1] [i_8 - 1] [i_8 - 1]))))));
                    }
                } 
            } 
            arr_36 [i_4] &= ((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 1]));
        }
        /* vectorizable */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_40 [i_4 + 1] = (signed char)-89;
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((var_1) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-90)))))));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1981781732U)) / ((-(var_4))))) * (((/* implicit */long long int) -276959974))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((1845797810960161710LL) + (((/* implicit */long long int) 2354467727U))));
                            arr_53 [i_4 - 1] [i_4 - 1] [i_12 - 1] [i_12 - 1] [i_14] [i_14] [i_15] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_50 [i_4 - 2] [i_12 - 1] [i_13 + 1] [i_14] [i_15])))), (((/* implicit */int) arr_48 [i_4 - 1] [i_12 - 1] [i_12 - 1] [i_14]))));
                            var_29 = ((/* implicit */long long int) var_0);
                            var_30 *= ((/* implicit */unsigned long long int) min(((((((_Bool)1) && (var_10))) && (((/* implicit */_Bool) ((long long int) arr_37 [i_14] [i_12 - 1]))))), (max((arr_19 [i_4] [i_15]), ((!(((/* implicit */_Bool) var_4))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
