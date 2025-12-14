/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5314
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2497898607456637980LL))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (~((+(1429476853)))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (0U)))))));
                            var_15 += ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                            var_16 = ((/* implicit */int) (+(((unsigned long long int) (short)346))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((-1429476853), (((/* implicit */int) (unsigned char)17)))))) ? (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */unsigned int) 1429476860)) : ((~(4248549376U))))) : (((/* implicit */unsigned int) (~(633984259))))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) 1429476855)), (4294967283U)))), (((((/* implicit */_Bool) (unsigned short)26959)) ? (6730081749586419806LL) : (((/* implicit */long long int) -1429476869))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((8068008886716387566LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) (-((~(((long long int) (unsigned short)38577))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)127), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)121))))) : (min((((unsigned long long int) (unsigned short)43092)), (((/* implicit */unsigned long long int) ((_Bool) (signed char)(-127 - 1))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (signed char)126)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) (unsigned short)38562))), ((unsigned short)13981))))) : (((((/* implicit */_Bool) (signed char)124)) ? (-966944203019519578LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) -1141530773)))))))))));
    }
    var_22 = ((/* implicit */long long int) var_9);
}
