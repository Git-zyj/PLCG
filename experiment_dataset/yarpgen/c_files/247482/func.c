/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247482
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)49326)), (-7LL))) < ((~(var_11)))))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12165)) ? (3958338034U) : (((/* implicit */unsigned int) -888106128))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_3 [i_0] [i_2]))) : (((unsigned int) (short)9))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0]) : (arr_8 [i_1]))) : (((/* implicit */unsigned long long int) var_11))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((-(((/* implicit */int) (_Bool)0))))))))));
                        var_17 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_0)) ? (312038878U) : (((/* implicit */unsigned int) arr_2 [i_2]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 *= ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)1] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-123)))))));
                            arr_14 [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((int) arr_5 [i_2] [i_3])) - (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)10332))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) && (((/* implicit */_Bool) arr_8 [i_1]))))))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (signed char)89))))))))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [10] = ((/* implicit */_Bool) var_4);
                            var_20 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_13 [i_3] [i_3])), (var_7)))))), ((~(arr_1 [i_0])))));
                        }
                    }
                    var_21 = ((/* implicit */short) var_7);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 17418113179013089034ULL)) && (((/* implicit */_Bool) var_2)))) || (((((/* implicit */long long int) 4294967290U)) < (3331884267287582281LL))))))) * (((((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) -1485889695)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3331884267287582281LL))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    var_24 = 1028630894696462581ULL;
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) var_4)))))));
    var_26 -= ((unsigned char) ((((/* implicit */long long int) (+(3589237670U)))) & (max((-3331884267287582296LL), (((/* implicit */long long int) var_4))))));
}
