/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31493
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
    var_19 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)202)) | (((/* implicit */int) (unsigned char)18)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 += ((var_16) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) / ((-(var_2)))));
        var_22 = ((/* implicit */unsigned int) var_11);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_12))) ^ (((int) var_15))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
            arr_8 [i_1] [3U] [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
        }
        for (unsigned short i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_4] [i_5] [i_6] &= 7574845863410420144LL;
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)36)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174)))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_17 [i_6 - 1] [i_3 + 1] [i_3] [i_3 + 2]))));
                        }
                    } 
                } 
            } 
            arr_21 [3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12))));
        }
        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_25 [i_7] [i_7] = ((((/* implicit */long long int) var_4)) ^ ((-(-2021479171753509590LL))));
            arr_26 [i_7] [i_1] [i_7] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_4 [i_1])))));
        }
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_9] [i_9] = (-((+((-(arr_27 [i_9]))))));
            /* LoopNest 3 */
            for (unsigned int i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                for (short i_11 = 3; i_11 < 19; i_11 += 2) 
                {
                    for (short i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_35 [i_11 - 1] [i_10 + 1] [i_12 + 1])))));
                            arr_43 [17LL] [i_8] [i_8] [17LL] [i_8] [17LL] [i_8] |= ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_11)), (var_10))), (((/* implicit */long long int) (-(arr_30 [i_8] [i_8]))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */short) ((((/* implicit */_Bool) -4361996484558866919LL)) || ((_Bool)1)))), (((short) arr_27 [i_9])))));
            arr_44 [i_8] [i_8] [i_8] &= var_16;
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) var_6);
                        arr_50 [(_Bool)0] [i_9] [14LL] [i_14] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) (_Bool)1)), (70368743129088LL))));
                    }
                } 
            } 
        }
        for (long long int i_15 = 3; i_15 < 18; i_15 += 4) 
        {
            var_30 = ((/* implicit */signed char) var_11);
            arr_53 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_8])) : (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) arr_49 [i_8]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_49 [i_8]))))) : (((/* implicit */int) var_9))));
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (unsigned short i_18 = 4; i_18 < 19; i_18 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_8] [i_8]));
                        arr_60 [i_8] [i_16] [i_17] [i_17] [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [i_18 - 2] [i_18]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_19 = 3; i_19 < 17; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) min((var_17), (var_17)));
                        arr_67 [i_8] [i_16] [i_16] [i_16] [i_16] [i_20] |= ((/* implicit */long long int) (+((-(arr_58 [i_8] [i_16])))));
                        var_33 = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
            var_34 = ((/* implicit */long long int) var_7);
        }
        for (unsigned char i_21 = 2; i_21 < 19; i_21 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (-(-70368743129088LL)))))));
                arr_72 [5LL] [i_21] [i_22] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (arr_61 [i_22] [i_22] [(unsigned char)16])))) ? ((+(arr_66 [i_8]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)177))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_36 [i_8] [i_8] [i_8])) + (var_2))) + (-1459374444))))));
            }
            for (int i_23 = 2; i_23 < 19; i_23 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)121)) * (((/* implicit */int) (unsigned char)228)))));
                arr_75 [i_8] [i_21] [i_21] = ((/* implicit */unsigned int) var_11);
                var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_14)), (min((((/* implicit */unsigned int) ((int) arr_37 [i_23] [(unsigned char)1]))), (267386880U)))));
            }
            var_38 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)36));
        }
    }
    var_39 += ((/* implicit */unsigned long long int) var_9);
}
