/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4404
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
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) > (min((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_1 [(unsigned short)11])))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [9U] [(unsigned short)4])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)182))))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_17 = (+(((/* implicit */int) (((~(arr_6 [i_1 - 1] [i_3] [i_4]))) >= (min((((/* implicit */unsigned int) arr_9 [i_0])), (arr_6 [i_1] [i_3] [i_4])))))));
                            var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [(unsigned char)16] [i_1 - 1] [i_2] [(unsigned char)16] [i_1])) || (((/* implicit */_Bool) var_8)))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) 1605316394)) && (((/* implicit */_Bool) (signed char)-61))))))) : ((+(((/* implicit */int) var_1))))));
                            var_19 = ((/* implicit */int) ((arr_11 [i_0] [i_2] [4] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_3])))));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] [i_1] [i_0] = (~((-(max((arr_3 [(_Bool)1] [3]), (((/* implicit */unsigned int) var_4)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1605316394))))));
            var_21 = ((/* implicit */int) min(((~((~(arr_3 [12U] [(signed char)13]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)186)))))));
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [16U] [i_0] [4U]))) % (min((((/* implicit */unsigned int) (unsigned char)182)), ((+(var_10)))))));
            var_22 = ((/* implicit */unsigned int) (unsigned char)182);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_8 [14U] [i_5] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21))))))))))));
        }
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned char)94))));
    }
}
