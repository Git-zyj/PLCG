/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220884
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_9))))))), (var_2)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = ((/* implicit */signed char) arr_8 [i_2] [i_1] [i_0]);
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_10 [i_1] [(short)8] [i_2] [i_1 - 1]), (arr_10 [(signed char)6] [i_1] [i_2] [i_1 - 1])))) | (((/* implicit */int) arr_10 [i_3] [i_3] [i_0] [i_1 - 1]))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << ((((+(((/* implicit */int) (unsigned char)82)))) - (75))))))));
                    }
                } 
            } 
        } 
        arr_13 [16U] [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [(unsigned short)17] [i_4] [i_4 - 1] [(signed char)11])), (((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)82))))))));
        var_19 = (short)-7;
        var_20 = ((/* implicit */short) (-(((((/* implicit */int) (short)-18044)) - (((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) arr_3 [i_4 - 1] [i_5]);
                        arr_25 [9U] [9U] [i_6] [(unsigned char)13] [(short)2] [i_4] |= var_6;
                        arr_26 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (short)18044);
                    }
                } 
            } 
            var_22 = (unsigned char)88;
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (short i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned long long int) var_13);
                        arr_32 [i_9] = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) var_0);
            var_25 = ((/* implicit */signed char) (_Bool)1);
            var_26 = ((/* implicit */unsigned short) min((max(((unsigned char)126), (((/* implicit */unsigned char) arr_17 [i_4 - 1] [i_4 - 1])))), (((/* implicit */unsigned char) (signed char)67))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                arr_37 [i_4] [(unsigned char)14] [i_4] = ((/* implicit */short) (((_Bool)1) ? ((+(((/* implicit */int) min((((/* implicit */short) arr_6 [i_4] [i_10] [i_11])), (arr_0 [i_4])))))) : (((/* implicit */int) (_Bool)1))));
                var_27 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_9)), (var_2)));
                arr_38 [i_4 - 1] [i_10] = (signed char)45;
            }
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                for (unsigned int i_14 = 1; i_14 < 17; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            arr_50 [i_4] [i_4] [i_12] [i_4] [i_4 - 1] [i_4 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) 9223372036787666944ULL)))) ? (((/* implicit */int) min(((signed char)-54), (((/* implicit */signed char) ((_Bool) (short)18041)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)22057)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)217)), (arr_31 [i_12] [i_14]))))))));
                            arr_51 [i_4] [i_12 - 1] [i_13] [i_12] [(signed char)9] [i_15] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_15 [(signed char)0]), ((_Bool)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 11807433098956124674ULL)))))))), (var_2)));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) max(((unsigned char)150), (arr_44 [i_4 - 1] [i_4 - 1] [i_12] [i_12])));
        }
    }
    /* vectorizable */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] [i_16 - 1] = arr_1 [i_16 - 1];
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned short) arr_24 [i_16] [i_16]);
    }
    var_29 = ((/* implicit */short) var_10);
}
