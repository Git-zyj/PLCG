/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223410
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
    var_16 |= (+(min(((-(33554424))), (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) (signed char)31))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (8701634442361088404ULL) : (arr_0 [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned short)65535)))))))));
                var_18 = ((/* implicit */int) (((~(16611786457455480324ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)240)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (7ULL) : (((/* implicit */unsigned long long int) (~((+(var_10))))))));
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_4 [i_1])))), (min((-830521297), (((/* implicit */int) (_Bool)1))))))) : (arr_0 [i_0] [i_0])));
                            var_21 = ((/* implicit */int) (_Bool)1);
                            var_22 *= ((/* implicit */short) arr_5 [i_0] [(_Bool)1] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)71)), (6LL)))), (var_1))), (max(((+(arr_3 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 690137730)), (var_10)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) 622230756954438970LL);
    var_25 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
    var_26 = var_3;
}
