/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211552
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1690532983U)) ? (arr_2 [i_0] [i_0 - 1]) : (((/* implicit */int) (unsigned short)32798))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)32726)) : (((/* implicit */int) (unsigned short)32730))))))) ? (max((((((/* implicit */_Bool) (unsigned short)32737)) ? (arr_2 [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0] [i_0]))), (((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        arr_4 [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (402653184) : (((/* implicit */int) (signed char)-59))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_0 [i_0])))) : (max((((/* implicit */int) (short)-6981)), (arr_2 [i_0] [i_0]))))), (((/* implicit */int) (signed char)-90))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (-1394241043) : (arr_2 [i_0 - 1] [i_0 - 1]))) : (max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 2])))));
    }
    var_19 = var_0;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)32766)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((unsigned short)32737), (((/* implicit */unsigned short) var_1))))))))));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8))))))), (3998853626052100374ULL)));
}
