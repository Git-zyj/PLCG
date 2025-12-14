/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226882
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
    var_10 = ((/* implicit */unsigned short) 125405929679887109LL);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((short) 125405929679887121LL));
                                var_12 = ((/* implicit */signed char) (+(((arr_0 [i_2 - 2]) | (((/* implicit */unsigned long long int) (+(-125405929679887109LL))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) >= (((/* implicit */int) ((_Bool) ((unsigned char) -125405929679887121LL))))));
        var_15 = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-1919110665232630062LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_16 = (+(var_6));
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)10] [i_5] [i_5])) ? (var_6) : ((+(arr_15 [i_0])))))) < (arr_14 [i_0] [i_0] [i_0])));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) var_7);
                var_19 = ((/* implicit */signed char) (~((~(arr_1 [i_0] [i_5])))));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
            }
            for (int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                var_21 = ((/* implicit */signed char) var_0);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    arr_25 [i_0] [(unsigned char)15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_0] [i_0] [i_5] [i_7] [i_8] [i_0]));
                }
                for (unsigned int i_9 = 4; i_9 < 20; i_9 += 4) 
                {
                    var_22 = ((/* implicit */short) arr_26 [i_0] [i_5]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_7 + 2] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7 + 2] [i_7 + 1] [i_9 - 2]))) : (arr_3 [i_7 + 1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7 - 1] [i_7 + 1] [i_9 - 3]))) : (arr_26 [i_0] [i_0]))))));
                }
                for (short i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_28 [i_0])), (((unsigned short) ((unsigned int) arr_6 [i_0] [i_5] [i_5])))));
                    var_24 = ((/* implicit */_Bool) arr_21 [i_10]);
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (+(arr_14 [i_0] [i_0] [i_0])))))));
                arr_35 [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((short) var_3))) < ((-(var_6))))));
            }
            var_26 *= ((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((signed char) arr_6 [(_Bool)1] [i_5] [(_Bool)1])))));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) max((((unsigned long long int) max((arr_23 [i_0] [i_0] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]), (((/* implicit */unsigned char) var_4))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_10 [i_0] [i_12 - 1] [i_0] [i_12] [i_0])) / (((/* implicit */int) (short)7519))))))));
            var_28 = max((8193093666571358909ULL), (450480820212245277ULL));
            arr_39 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) min((arr_18 [i_0] [i_0] [i_12] [i_12 - 1]), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_27 [i_0] [i_12 - 1] [i_0] [i_12])))), (((_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 125405929679887116LL)) && (((/* implicit */_Bool) (unsigned short)11))))));
            arr_40 [i_0] = ((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12 - 1] [i_12]);
        }
        for (int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) -125405929679887122LL));
            arr_45 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)22))));
            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_2)))))))));
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) 1234103215453317401ULL))));
        }
    }
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            var_31 = ((/* implicit */short) var_2);
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1919110665232630062LL))) ? (((/* implicit */int) ((unsigned char) (signed char)-3))) : (arr_48 [i_14])))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_33 [i_14] [i_14] [i_14] [i_15]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_14] [i_14])))))))) : (((/* implicit */int) arr_9 [(unsigned char)0] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) ((int) var_5))));
                var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14] [i_15])))))));
                arr_56 [i_14] [i_15] = ((/* implicit */int) arr_41 [18ULL]);
            }
        }
        var_35 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_10 [i_14] [i_14] [i_14] [i_14] [(short)8]), (((/* implicit */short) var_2)))))));
        var_36 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) (short)15391))), (arr_7 [i_14] [i_14] [i_14] [i_14])));
    }
    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        arr_60 [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((unsigned short) (signed char)-23)), (var_3))))));
        arr_61 [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_15 [i_17])) | (arr_22 [i_17] [i_17]))) > (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_42 [i_17])))))))));
    }
    var_37 = ((/* implicit */unsigned long long int) var_0);
}
