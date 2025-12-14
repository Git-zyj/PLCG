/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230187
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_1 [i_0]), (-6164256347590926047LL)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-90)))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_1)) : (var_13)))) && (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)227)) & (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(-3455152516190414949LL)))))))));
        var_17 = ((/* implicit */_Bool) (unsigned char)84);
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4159862670052796521LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                        arr_15 [i_1] [(short)13] [(short)13] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (((_Bool)1) ? (max((-1645435038), (1645435030))) : (((/* implicit */int) (_Bool)0))));
                        var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [19U] [19U] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_13))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (2053051704U))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_20 ^= ((/* implicit */short) (+(589468737625915670LL)));
                            arr_18 [15LL] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)23784))))) ? (((/* implicit */int) (short)22789)) : (((int) (signed char)-88))));
                            arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (-(var_9)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3] [i_3 - 1] [i_3])) ? (arr_5 [i_1]) : (((/* implicit */int) (unsigned char)23))))) ? (((((((/* implicit */int) arr_13 [(unsigned char)5] [i_1] [i_1] [(unsigned char)5])) & (((/* implicit */int) (unsigned char)241)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))) : ((~(((/* implicit */int) arr_14 [i_3 - 2] [i_2] [i_1] [i_4]))))));
                            var_22 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)168))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (var_13)))))))));
                            var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((1645435041) >> (((/* implicit */int) arr_20 [i_1] [(_Bool)1] [i_3] [(_Bool)1] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) arr_7 [(unsigned char)9] [i_2] [11U])) : (((/* implicit */int) var_11)))) : (var_3))), (((/* implicit */int) var_12))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_10 [i_1] [i_3 - 1] [i_3 + 1] [i_1]);
                            arr_24 [i_3] [i_1] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)40))));
                        }
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((var_9) * (((/* implicit */long long int) ((/* implicit */int) (!(var_7))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [(unsigned char)8])) / (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 2] [(unsigned char)6]))))))))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */unsigned short) ((long long int) ((((arr_20 [(_Bool)1] [i_1] [i_1] [14U] [i_1]) && (var_7))) && (((/* implicit */_Bool) var_10)))));
    }
    var_26 = var_14;
    var_27 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))) * (((/* implicit */int) var_11))));
}
