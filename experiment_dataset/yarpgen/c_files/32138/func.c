/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32138
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
    var_13 = ((/* implicit */int) ((max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((var_6) / ((-2147483647 - 1))))))) + (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(arr_0 [(_Bool)1]))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */int) arr_3 [i_0] [(unsigned short)3]);
            var_16 = (~(arr_4 [i_1] [i_1] [i_1]));
            var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)245))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 4; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_19 [i_2] [i_4] [i_5] = ((/* implicit */int) ((unsigned long long int) -1017862332312946290LL));
                            arr_20 [i_2] [i_0] [i_2] [i_0] [(_Bool)1] [i_4] [6LL] = ((((/* implicit */_Bool) arr_17 [i_2] [i_5 - 4] [i_5] [i_2] [i_5] [(unsigned char)17])) ? (var_5) : (((/* implicit */long long int) arr_17 [i_5] [i_5 - 2] [i_5] [(short)9] [i_5] [i_5])));
                        }
                    } 
                } 
                arr_21 [i_0] [i_2] [i_0] = ((/* implicit */short) ((683689085) & (((/* implicit */int) arr_15 [i_2] [i_3]))));
                arr_22 [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_9 [i_0] [i_2] [i_3]));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(arr_7 [(unsigned short)15] [(unsigned short)15])))) / (arr_4 [i_0] [i_2] [i_2])));
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_31 [i_2] [i_2] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */short) arr_30 [i_0] [i_2] [(unsigned char)15] [i_7] [1U]);
                            arr_32 [i_8] [i_2] [i_2] = ((/* implicit */int) arr_15 [i_6] [i_6]);
                        }
                    } 
                } 
                arr_33 [(unsigned char)19] [i_2] [i_2] = ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))));
                var_19 *= ((/* implicit */unsigned char) ((long long int) var_9));
                arr_34 [i_2] [i_6] [18LL] [i_2] = ((/* implicit */int) arr_1 [i_0]);
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((4294967286U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_2] [i_0] [i_0]))))))));
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_12 [i_0])))));
            }
            for (int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_0))));
                var_23 *= ((/* implicit */unsigned long long int) (short)32767);
            }
            arr_40 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((long long int) arr_26 [i_0] [i_2] [i_2]));
            var_24 ^= ((/* implicit */unsigned short) (~(arr_8 [i_0] [i_2] [i_2])));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 4; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) (_Bool)1);
                        arr_47 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) & (10953166546058475580ULL)));
                        arr_48 [i_2] [i_2] = ((/* implicit */int) var_11);
                    }
                } 
            } 
            arr_49 [i_2] [13ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_46 [(_Bool)1] [i_2] [i_2] [i_0]))));
        }
        for (int i_13 = 2; i_13 < 18; i_13 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((int) arr_43 [i_0] [i_0] [i_13])))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_0])) * (((/* implicit */int) var_8)))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                for (long long int i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_57 [i_13] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_30 [i_0] [11LL] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (short)32767)))) << (((((((/* implicit */_Bool) (unsigned short)52266)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18616))))) - (11798149153694170659ULL)))));
                        arr_58 [i_13] [i_13] = ((/* implicit */int) ((short) (unsigned char)108));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_16 = 1; i_16 < 20; i_16 += 2) 
            {
                var_28 = ((/* implicit */long long int) min((var_28), (var_5)));
                var_29 -= ((/* implicit */_Bool) ((long long int) (short)504));
            }
        }
        for (int i_17 = 2; i_17 < 18; i_17 += 3) /* same iter space */
        {
            arr_64 [i_0] [i_17] = ((/* implicit */signed char) ((unsigned int) (~(arr_53 [18] [(short)20] [(unsigned short)2] [i_0]))));
            var_30 -= ((/* implicit */long long int) (unsigned char)16);
            arr_65 [(short)12] [i_17] [i_17] = ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_17] [i_17 - 2])));
        }
    }
    var_31 = ((/* implicit */_Bool) (~(var_12)));
    var_32 -= ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned long long int) var_6))));
}
