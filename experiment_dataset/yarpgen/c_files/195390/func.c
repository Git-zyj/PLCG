/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195390
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)95);
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)59)))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-9103)) > (((/* implicit */int) (unsigned char)103))));
            arr_13 [i_2] [i_2] = ((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) + ((-(arr_5 [i_2]))));
            arr_14 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_1 [i_0])));
        arr_16 [i_0] = (!(((/* implicit */_Bool) ((3191294006026696800LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200)))))));
        arr_17 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)9102))));
    }
    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        arr_21 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3])) : (((/* implicit */int) (unsigned char)93)))) << ((((+(((/* implicit */int) (short)-22830)))) + (22854)))));
        arr_22 [i_3] [i_3] = ((/* implicit */short) var_0);
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_27 [i_3] [i_4] [i_3] [i_4] = (short)-22832;
                    arr_28 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)82))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9102))));
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */short) min(((+(((/* implicit */int) arr_24 [i_3 + 1] [i_3 - 2] [i_3 - 2])))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_24 [i_3 - 2] [i_3 + 1] [i_3 - 2]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_34 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8531)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)1382))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22830)) : (((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_6] [i_6] [i_6]))) : (((/* implicit */int) arr_3 [i_6] [i_6] [(short)12]))))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 3; i_7 < 20; i_7 += 3) 
        {
            arr_38 [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_33 [i_7 + 1] [i_7 - 1]))) ? (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) arr_33 [i_7 - 3] [i_7 - 2])) : (((/* implicit */int) var_13)))) : ((-(((/* implicit */int) (_Bool)1))))));
            arr_39 [i_6] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) (signed char)73)))) ? ((~((-(((/* implicit */int) (short)-3345)))))) : (min((((int) var_4)), (((((/* implicit */_Bool) arr_1 [i_7 - 2])) ? (((/* implicit */int) arr_2 [(unsigned char)6])) : (((/* implicit */int) (_Bool)1))))))));
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            arr_42 [i_8 + 1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)10963))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                for (short i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    {
                        arr_47 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (short)-24614)))))));
                        arr_48 [i_6] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)18060))));
                    }
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_52 [i_11] = ((/* implicit */short) (-((~(((/* implicit */int) (short)10963))))));
            arr_53 [i_11] [i_6] |= (unsigned short)33955;
            arr_54 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        }
        arr_55 [i_6] = ((/* implicit */long long int) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_37 [i_6] [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (!(arr_35 [i_6] [i_6] [i_6]))))));
        arr_56 [i_6] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43205)) ? (((/* implicit */int) (unsigned short)31562)) : (((/* implicit */int) (unsigned short)47495))));
        arr_57 [i_6] = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_19 = ((/* implicit */long long int) ((unsigned short) ((int) ((unsigned char) (unsigned char)0))));
    var_20 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)22330)))) >= ((-(((/* implicit */int) var_5)))))))));
}
