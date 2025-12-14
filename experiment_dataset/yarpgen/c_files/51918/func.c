/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51918
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
    var_15 = ((/* implicit */int) 3949181320U);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_16 &= ((/* implicit */_Bool) ((int) var_0));
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((-1537853363) + (1537853380)))))) ? (arr_0 [i_0]) : (((var_2) >> (((264241152) - (264241135)))))))) ? (((/* implicit */unsigned int) (~(((((arr_0 [i_0]) + (2147483647))) >> (((/* implicit */int) var_13))))))) : (max((((((/* implicit */_Bool) 264241150)) ? (((/* implicit */unsigned int) var_2)) : (345785976U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [16U] [i_1]))))))))))));
            var_18 = ((/* implicit */int) ((((unsigned long long int) max((arr_0 [i_1]), (-264241144)))) / (min((var_12), (((/* implicit */unsigned long long int) ((int) 264241143)))))));
        }
        var_19 = ((/* implicit */unsigned int) ((((-264241152) + (2147483647))) >> (((3373149744540979473ULL) - (3373149744540979444ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_0);
        arr_5 [16U] [i_0] = ((/* implicit */unsigned int) var_0);
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) max((var_2), ((~(((((/* implicit */int) arr_3 [(_Bool)1] [i_2])) | (((/* implicit */int) arr_3 [16ULL] [(_Bool)1]))))))));
        var_20 += ((unsigned int) ((((unsigned int) var_5)) ^ (345785975U)));
    }
    var_21 = ((/* implicit */int) (unsigned char)31);
    var_22 = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) min((-134531057), (((/* implicit */int) (_Bool)1)))))));
}
