/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50248
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
    var_13 *= ((/* implicit */signed char) ((unsigned short) var_1));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)50))))) : (max((((int) var_7)), (((((/* implicit */int) (unsigned char)202)) * (((/* implicit */int) (_Bool)0))))))));
            arr_5 [i_0] |= ((/* implicit */unsigned char) var_1);
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_4 [i_0] [4U] [i_1]))));
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_17 [(_Bool)1] [i_3] [(unsigned short)17] [(_Bool)1] [(unsigned short)19] = (+(((/* implicit */int) (_Bool)0)));
                                var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_8)))) + (((/* implicit */int) (!(((/* implicit */_Bool) -1809466235)))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)18721))))) : (((/* implicit */int) (!((_Bool)1))))))) && ((_Bool)0)));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [(unsigned short)6] [i_3] |= ((((/* implicit */int) (unsigned char)29)) > (((/* implicit */int) (_Bool)1)));
                    arr_19 [i_3] [i_3] [i_2] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) > (-63103591)))))) | (var_2));
                    arr_20 [i_0 + 1] [(unsigned char)20] [i_3] = ((/* implicit */unsigned short) ((long long int) ((arr_3 [(unsigned short)18] [(unsigned short)18] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_6] [i_6] [i_8] [i_9 - 1] [i_10 - 1] [i_9 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) -231457448))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29897)))))))));
                            arr_38 [i_6] [i_7] [i_8] = (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((_Bool) -63103590))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)9063)))))));
                            arr_39 [i_8] [11LL] [i_8 + 1] [10LL] [i_10 - 1] [i_9 - 1] [2] = ((/* implicit */unsigned short) arr_9 [i_8] [(_Bool)1]);
                        }
                        var_18 *= ((/* implicit */unsigned int) arr_34 [i_7] [(unsigned short)0] [(unsigned char)2] [i_9 + 1] [(signed char)3] [i_6] [i_6]);
                    }
                } 
            } 
        } 
        arr_40 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) arr_15 [i_6] [i_6])))));
    }
    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        arr_43 [i_11] = ((/* implicit */unsigned short) (_Bool)0);
        arr_44 [i_11] = (((_Bool)1) ? (-231457475) : (((/* implicit */int) ((signed char) -1))));
    }
    var_19 = ((/* implicit */short) var_12);
}
