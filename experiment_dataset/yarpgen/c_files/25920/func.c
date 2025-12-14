/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25920
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
    var_15 = ((/* implicit */unsigned short) 4853513516014531451ULL);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [i_1] [1ULL] [(short)11] = ((/* implicit */unsigned short) ((signed char) max((arr_7 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_6)))));
                        var_16 = ((/* implicit */short) ((unsigned long long int) max((((unsigned long long int) arr_0 [(unsigned short)12])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) var_4))))))));
                        var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)8419)) ? (((/* implicit */int) (unsigned short)52013)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [5ULL] [i_2] [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_2;
                        arr_24 [i_4] [i_4] [i_4] [8] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned char) var_10)), (arr_8 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1605748239U)) && (((/* implicit */_Bool) ((long long int) var_2)))));
                            arr_27 [i_0] [i_4] [i_5] [(_Bool)1] [i_4] = ((/* implicit */int) ((arr_14 [i_0] [i_4]) < (((/* implicit */unsigned long long int) arr_22 [i_4]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)41)) | (((/* implicit */int) (signed char)0)))) != (arr_11 [i_8] [i_8])));
        var_20 = (!(((/* implicit */_Bool) (unsigned char)188)));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned short)8609))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((short) 5107043504648695892ULL))))));
        arr_35 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (-569304041609385360LL) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) arr_22 [(unsigned short)9]))))));
        arr_36 [(_Bool)1] = var_10;
        arr_37 [i_9] = ((/* implicit */unsigned char) ((signed char) var_4));
    }
}
