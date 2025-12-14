/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223812
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)65531)))));
                        arr_9 [i_1] [i_0] [i_2 - 3] [i_0] [i_0] = ((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)65531)), (11))), (((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                        var_18 = ((((/* implicit */int) min(((unsigned char)5), (((/* implicit */unsigned char) ((signed char) (unsigned short)65535)))))) == (((/* implicit */int) max(((unsigned short)8), (((/* implicit */unsigned short) (_Bool)0))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65527))), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) ((-4278866667728569463LL) > (max((((/* implicit */long long int) (unsigned short)12740)), (3805436249414860257LL))))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)60954)), ((-(((/* implicit */int) (unsigned short)7646))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (max((((/* implicit */unsigned short) (unsigned char)231)), ((unsigned short)17)))))) > (((/* implicit */int) (!(var_4))))));
}
