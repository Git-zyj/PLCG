/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42757
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
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)4919)), (10676150663198835853ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((((var_4) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))))))) / (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3]))) * (2783832647U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60615)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)4919)))))))));
        var_15 = var_12;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)32753), (((/* implicit */short) arr_2 [i_0 - 4]))))) / (((/* implicit */int) ((short) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_1]))))) : (max((((unsigned long long int) (signed char)-49)), (((/* implicit */unsigned long long int) var_5))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_16 = ((unsigned int) ((unsigned char) var_6));
                    var_17 = max(((~((-(((/* implicit */int) (short)-15568)))))), (((((/* implicit */_Bool) (+(arr_10 [i_0] [i_2] [i_3])))) ? (((/* implicit */int) min(((unsigned short)60617), (var_9)))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)155)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 3])))) ? ((-((-(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9)))))))))));
    }
    for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4 - 4] [i_4 - 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */int) var_2)) & (((((/* implicit */int) var_8)) & (((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_3 [(unsigned short)10] [i_4]))));
        var_19 = ((/* implicit */unsigned short) var_8);
        arr_16 [i_4] [i_4 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -240606639)) ? (((/* implicit */int) (unsigned short)7656)) : (-1039249813)))) ? (((/* implicit */int) var_2)) : ((+((+(((/* implicit */int) var_6))))))));
        var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_4)) ? ((-(arr_10 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8))))))))));
    }
}
